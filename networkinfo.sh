ip=$(ip addr | grep 'state UP' -A2 | tail -n1 | awk '{print $2}' | cut -f1  -d'/')
echo "IP: ${ip}"
echo "Hostname: $(hostname)"
echo "Gateway: $(ip route | grep default | awk '{print $3}')"
echo "DNS: $(cat /etc/resolv.conf | grep nameserver | awk '{print $2}')"
