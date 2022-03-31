## usage of the program
# python3 pi.py "city"

# a program that takes an input of a city and print the weather
import requests
import sys

# get the city from the input and assign it to a variable
city = sys.argv[1]
url = 'http://api.openweathermap.org/data/2.5/weather?q={}&units=imperial&appid=271d1234d3f497eed5b1d80a07b3fcd1'
response = requests.get(url.format(city)).json()
print('The weather in {} is {} and the temperature is {} degrees.'.format(city, response['weather'][0]['description'], response['main']['temp']))

  
