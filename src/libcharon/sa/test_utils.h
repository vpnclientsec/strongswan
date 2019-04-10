#ifndef TEST_UTILS_H
#define TEST_UTILS_H

#define DB_SCRIPT_PATH "/root/vpntest/vpnclientsec/www/db.py"
#define DATA_TEMPLATE "\"{\\\"username\\\": \\\"\\\", \\\"ip\\\": \\\"%H\\\", \\\"protocol\\\": \\\"%s\\\", \\\"result\\\": \\\"%s\\\"}\""
#define DB_UPDATE_TEMPLATE DB_SCRIPT_PATH " -o update -d " DATA_TEMPLATE

#define PROTO_SOFTETHER "softether"
#define PROTO_L2TP "l2tp/ipsec"
#define PROTO_SSTP "sstp"
#define PROTO_IKEv2 "ikev2"

#define RESULT_NO_SERVER_VERIFICATION "Your client does not verify the server's certificate."
#define RESULT_WEAK_PRESHARED_KEY "Your client uses weak preshared key for IPsec."
#define RESULT_IMPROPER_SERVER_VERIFICATION "Your client does not properly verify the server certificate."
#define RESULT_OK "Your client is not vulnerable to our attack."

#endif  // TEST_UTILS_H