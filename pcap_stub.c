/* Minimal pcap stubs for tcpdump ASan compilation without libpcap installed.
 * These functions are only called in tcpdump initialization code, not in the
 * bootp_print() path that we are validating. */
#include <stdio.h>

struct pcap_etherent {
    unsigned char addr[6];
    char          name[122];
};

struct pcap_etherent *pcap_next_etherent(FILE *fp) {
    (void)fp;
    return (void *)0;
}
