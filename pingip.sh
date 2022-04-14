echo "what ip you want to ping?"
read ip
ping -c 1 $ip > /dev/null
if [ $? -eq 0 ]; then
	echo "Ping successful"
else
	echo "Ping unsuccessful"
fi
