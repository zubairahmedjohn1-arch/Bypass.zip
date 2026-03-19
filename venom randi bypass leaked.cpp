
__int64 __fastcall (*osub_5B8EAE0)(__int64 result, __int64 a2);
__int64 __fastcall hsub_5B8EAE0(__int64 result, __int64 a2) {
    if (!result || !osub_5B8EAE0) {
        return 0;
    }
    __int64 v7 = 0;
    bool read = true;
    if ((uintptr_t)result < 0x1000) read = false;    
    if (read) {
        v7 = *(__int64*)(result + 360);        
        if (v7 && (uintptr_t)v7 > 0x1000) {
            unsigned char role = *((unsigned char*)(v7 + 424));
            if (role == 3) {
                return 1;
            }
        }
    }
    return osub_5B8EAE0(result, a2);


int64 (*sub_336294)(int64 a1);
int64 fastcall hsub_33B274(__int64 a1) {
    if (!a1) return sub_336294 ? sub_336294(a1) : 0;
    __int64 tpidr_el0 = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
    if (tpidr_el0) {
        int64* banState = (int64*)(tpidr_el0 + 40);
        *banState = 0; 
    }
    __int64 result = sub_336294(a1);
    if (result) {
        int64* table = (int64*)a1;
        if (table && (a1 + 0x800 > a1)) { 
        }
    }

    return result;
}



__int64 __fastcall (*osub_2328F0)(__int64 a1, const char *a2, bool a3);
__int64 __fastcall hsub_2328F0(__int64 a1, const char *a2, bool a3) {
    
    if (strstr(a2, "XTask_builtin.zip_vm_main.img")) {
        sleep(100000);
        
     LOGI("C16 🚫 : a2 -> %s",a2);
        return 0LL;
    }
    
    if (strstr(a2, "mem_trap2") ||
        strstr(a2, "local_cache") ||
        strstr(a2, "report_bk")) {
        
       LOGI("C16 🚫 : a2 -> %s",a2);
        return 0LL;
    }
    
    if (strstr(a2, "cal_cert_md5") ||
        strstr(a2, "9003_cert_md5")) {
        
      LOGI("C16 🚫 : a2 -> %s",a2);
        return 0LL;
    }
    
    
    if (strstr(a2, "opcode_scan") ||
        strstr(a2, "crash") || 
        strstr(a2, "opcode")) { 
        
     LOGI("C16 🚫 : a2 -> %s",a2);
        return 0LL;
    }
    if (strstr(a2, "property_get") ||
        strstr(a2, "env_chk") ||
        strstr(a2, "user_tag")) {
        
      LOGI("C16 🚫 : a2 -> %s",a2);
        return 0LL;
    }

    return osub_2328F0(a1, a2, a3);
}



__int64 __fastcall (*RANDI)(__int64 a1, const char *a2, __int64 a3) = nullptr;
__int64 __fastcall hRANDI(__int64 a1, const char *a2, __int64 a3)
{
if (!a3){return 0;}
if (a3){
 *(_QWORD *)(a3 + 40) = 0;
*(unsigned int *)(a3 + 32) = 0;
*(unsigned __int16 *)(a3 + 60) = 0;
*(unsigned __int16 *)(a3 + 48) = 0;
return 1;
}
return RANDI(a1,a2,a3);
}


__int64 (*osub_46EFD0)(_DWORD *a1, unsigned __int8 *a2, int a3);
__int64 __fastcall hsub_46EFD0(_DWORD *a1, unsigned __int8 *a2, int a3)
{
    bool validZip =
        a2 &&
        a2[0] == 0x50 &&
        a2[1] == 0x4B &&
        a2[2] == 0x03 &&
        a2[3] == 0x04;

    if (!validZip) {
        return 0LL;
    }

    return osub_46EFD0(a1, a2, a3);
}

typedef __int64 (*sub_6628610_t)(__int64 a1);
sub_6628610_t old_sub_6628610 = nullptr;
__int64 hook_sub_6628610(__int64 a1) {

    *(uint8_t*)(a1 + 484) = 0; 
    __int64 result = old_sub_6628610(a1);
    
    int statusFlags = *(int*)(a1 + 784);
    if (statusFlags & 0x40) {
        *(int*)(a1 + 784) &= ~0x40;
    }

    return result;
}


__int64 __fastcall (*osub_7B7C9F4)(
    __int64 a1,
    __int64 a2,
    __int64 a3,
    _BYTE *a4
);

__int64 __fastcall hsub_7B7C9F4(
    __int64 a1,
    __int64 a2,
    __int64 a3,
    _BYTE *a4
)


void __fastcall (*osub_7F8C3D4)(__int64 a1, _WORD *a2);

void __fastcall hsub_7F8C3D4(__int64 a1, _WORD *a2)
{
    if (!a1)
        return;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = 0;
    *(_QWORD *)(a1 + 8) = 0;
    LOGD("sub_7F8C3D4 neutralized");

    return;
}


__int64 __fastcall (*osub_87E88F8)(__int64 result, __int16 *a2);

__int64 __fastcall hsub_87E88F8(__int64 result, __int16 *a2)
{
    if (!result || !a2)
        return result;
    *(_WORD *)(result + 648) = *a2;
    *(_BYTE *)(result + 650) = *((_BYTE *)a2 + 2);

    
    *(_DWORD *)(result + 664) = 0;     
    *(_QWORD *)(result + 656) = 0;
    return result;
}

__int64 (*osub_9D7D4A0)(_BYTE *a1, __int64 a2);
__int64 __fastcall hsub_9D7D4A0(_BYTE *a1, __int64 a2)
{
    if (!a1)
        return 0;

    a1[116] &= ~1;

    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 1072LL))(a1, a2);
}



__int64 __fastcall (*osub_A0F5210)(__int64 a1, __int64 a2);
__int64 __fastcall hsub_A0F5210(__int64 a1, __int64 a2) {
    return 0; 


//)/))/))))////////////))///Bypass Offsets started Here



PATCH_LIB("libanogs.so","0x1C1430","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x1C1444","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x1C1634","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x1C16DC","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x1C16F0","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x1C1758","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x36A5B8","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x371418","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x37FD78","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x39F56C","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x3A4CCC","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x1C79D4","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x1ECD44","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x2234B0","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x29BF24","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x330494","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x431800","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x461F04","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x4633F4","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x471B68","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x47B5CC","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x49A628","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x4D1DD0","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x4D4C94","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x213360","C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x21B998","C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x232C7C","C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x23F3C8","C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x2940D0","C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x3A564C","C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x3DBD34","C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x4B0F5C","C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x4B4B54","C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libanogs.so","0x4690CC","C0 03 5F D6");//////@venom randi bypass leaked/////
HOOK_LIB("libanogs.so","0x2328F0", hsub_2328F0, osub_2328F0);//////@venom randi bypass leaked/////
HOOK_LIB("libanogs.so", "0x446034", hRANDI,RANDI);//////@venom randi bypass leaked/////
HOOK_LIB("libanogs.so","0x46EFD0", hsub_46EFD0, osub_46EFD0);//////@venom randi bypass leaked/////
HOOK_LIB("libanogs.so","0x33B274", hsub_33B274,sub_336294);


0x5026F0 HOOK OFFSET
0x335D20 HOOK OFFSET
0x436950 HOOK OFFSET


PATCH_LIB("libUE4.so","0x583ED40","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libUE4.so","0x58BD260","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libUE4.so","0x5B69EE4","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libUE4.so","0x5B6D5E0","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
HOOK_LIB("libUE4.so","0x5B8EAE0", hsub_5B8EAE0, osub_5B8EAE0);//////@venom randi bypass leaked/////
HOOK_LIB("libUE4.so","0x6628610", hook_sub_6628610, old_sub_6628610);//////@venom randi bypass leaked/////
HOOK_LIB("libUE4.so","0x7B7C9F4", hsub_7B7C9F4, osub_7B7C9F4);//////@venom randi bypass leaked/////
HOOK_LIB("libUE4.so","0x7F8C3D4", hsub_7F8C3D4, osub_7F8C3D4);
PATCH_LIB("libUE4.so","0x8110534","C0 03 5F D6");//////@venom randi bypass leaked/////
HOOK_LIB("libUE4.so","0x87E88F8", hsub_87E88F8, osub_87E88F8);//////@venom randi bypass leaked/////
HOOK_LIB("libUE4.so","0x9D7D4A0", hsub_9D7D4A0, osub_9D7D4A0);//////@venom randi bypass leaked/////
HOOK_LIB("libUE4.so","0xA0F5210", hsub_A0F5210, osub_A0F5210);//////@venom randi bypass leaked/////

PATCH_LIB("libTBlueData.so","0x2D6948","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libTBlueData.so","0x2D6D6C","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libTBlueData.so","0x2D8550","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libTBlueData.so","0x2D8C9C","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libTBlueData.so","0x07197C","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libTBlueData.so","0x09D424","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////
PATCH_LIB("libTBlueData.so","0x09E4B0","00 00 80 D2 C0 03 5F D6");//////@venom randi bypass leaked/////


one skin offset also this randi is using 