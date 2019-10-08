
#ifdef MBED_CLOUD_CLIENT_USER_CONFIG_FILE
#include MBED_CLOUD_CLIENT_USER_CONFIG_FILE
#endif

#include <stdint.h>

#ifdef MBED_CLOUD_DEV_UPDATE_ID
const uint8_t arm_uc_vendor_id[] = {
    0x10, 0xa3, 0x30, 0x60, 0x7d, 0x8b, 0x5e, 0x59, 0xad, 0x63, 0xe6, 0xa1, 0x8b, 0x9c, 0xe5, 0xcf
};
const uint16_t arm_uc_vendor_id_size = sizeof(arm_uc_vendor_id);

const uint8_t arm_uc_class_id[]  = {
    0x21, 0x4e, 0x0b, 0x6a, 0x99, 0x52, 0x51, 0x67, 0xaa, 0x2f, 0xc4, 0x4c, 0xa0, 0x8b, 0x3c, 0x6b
};
const uint16_t arm_uc_class_id_size = sizeof(arm_uc_class_id);
#endif

#ifdef MBED_CLOUD_DEV_UPDATE_CERT
const uint8_t arm_uc_default_fingerprint[] =  {
    0x71, 0x03, 0x8d, 0x7c, 0x74, 0x96, 0xad, 0x17, 0x9a, 0xda, 0x08, 0x6d, 0x09, 0x5f, 0x11, 0x98,
    0xf8, 0xc7, 0x88, 0xbb, 0xc2, 0xbe, 0x75, 0x0e, 0xf2, 0x99, 0xe8, 0x17, 0x69, 0x83, 0xe0, 0x49
};
const uint16_t arm_uc_default_fingerprint_size =
    sizeof(arm_uc_default_fingerprint);

const uint8_t arm_uc_default_subject_key_identifier[] =  {
};
const uint16_t arm_uc_default_subject_key_identifier_size =
    sizeof(arm_uc_default_subject_key_identifier);

const uint8_t arm_uc_default_certificate[] = {
    0x30, 0x82, 0x01, 0x4c, 0x30, 0x81, 0xf4, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x14, 0x43, 0x17,
    0x86, 0xaa, 0x9c, 0xe9, 0x3a, 0x1b, 0x65, 0x54, 0xb4, 0x4e, 0xc2, 0x25, 0x87, 0x44, 0xee, 0x70,
    0xf0, 0xff, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 0x14,
    0x31, 0x12, 0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x09, 0x6c, 0x6f, 0x63, 0x61, 0x6c,
    0x68, 0x6f, 0x73, 0x74, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x39, 0x31, 0x30, 0x30, 0x38, 0x30, 0x32,
    0x30, 0x34, 0x31, 0x36, 0x5a, 0x17, 0x0d, 0x32, 0x30, 0x31, 0x30, 0x30, 0x37, 0x31, 0x35, 0x30,
    0x30, 0x30, 0x30, 0x5a, 0x30, 0x14, 0x31, 0x12, 0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c,
    0x09, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x68, 0x6f, 0x73, 0x74, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07,
    0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01,
    0x07, 0x03, 0x42, 0x00, 0x04, 0x18, 0x96, 0xe9, 0x41, 0x0c, 0xaa, 0x37, 0x03, 0x6c, 0x32, 0xd6,
    0xee, 0xd9, 0x1b, 0x9e, 0x9c, 0x4a, 0xf9, 0x66, 0x98, 0x7e, 0x4c, 0xf6, 0xf2, 0x28, 0x0b, 0x13,
    0xa5, 0xad, 0x2f, 0xed, 0xc7, 0x7c, 0x77, 0x81, 0x70, 0xad, 0x79, 0x72, 0x6b, 0x6a, 0x81, 0x9e,
    0x72, 0x62, 0x59, 0x16, 0x55, 0xd0, 0xd3, 0xb5, 0x34, 0x24, 0x35, 0xc0, 0x91, 0x64, 0x3c, 0x40,
    0x08, 0xae, 0xe8, 0x40, 0xc1, 0xa3, 0x24, 0x30, 0x22, 0x30, 0x0b, 0x06, 0x03, 0x55, 0x1d, 0x0f,
    0x04, 0x04, 0x03, 0x02, 0x07, 0x80, 0x30, 0x13, 0x06, 0x03, 0x55, 0x1d, 0x25, 0x04, 0x0c, 0x30,
    0x0a, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x03, 0x30, 0x0a, 0x06, 0x08, 0x2a,
    0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03, 0x47, 0x00, 0x30, 0x44, 0x02, 0x20, 0x49, 0x20,
    0xe1, 0xd8, 0x1f, 0x8c, 0x4d, 0xcc, 0xe4, 0x5f, 0xc6, 0x96, 0x50, 0x8c, 0xdc, 0x42, 0x62, 0x21,
    0x0a, 0x8b, 0x1f, 0x0a, 0x1e, 0x41, 0x04, 0x8e, 0x4d, 0x13, 0x81, 0xd1, 0x74, 0x31, 0x02, 0x20,
    0xab, 0x2d, 0xd4, 0xd7, 0xc0, 0x01, 0x3d, 0xd0, 0x23, 0xac, 0xa2, 0xdd, 0xc7, 0x5d, 0x18, 0xa1,
    0x83, 0x59, 0xa6, 0xf8, 0xd0, 0x84, 0xa4, 0x93, 0xa1, 0x5e, 0x83, 0x54, 0xec, 0x06, 0xa1, 0x26
};
const uint16_t arm_uc_default_certificate_size = sizeof(arm_uc_default_certificate);
#endif


#ifdef MBED_CLOUD_DEV_UPDATE_PSK
const uint8_t arm_uc_default_psk[] = {

};
const uint8_t arm_uc_default_psk_size = sizeof(arm_uc_default_psk);
const uint16_t arm_uc_default_psk_bits = sizeof(arm_uc_default_psk)*8;

const uint8_t arm_uc_default_psk_id[] = {

};
const uint8_t arm_uc_default_psk_id_size = sizeof(arm_uc_default_psk_id);
#endif