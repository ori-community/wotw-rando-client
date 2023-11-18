#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CertificateProblem__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CertificateProblem__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateProblem__Enum_DEFINED)
#define IL2CPP_STRUCT_CertificateProblem__Enum_DEFINED
enum class CertificateProblem__Enum : int32_t {
    OK = 0x00000000,
    TrustNOSIGNATURE = -2146762496,
    CertEXPIRED = -2146762495,
    CertVALIDITYPERIODNESTING = -2146762494,
    CertROLE = -2146762493,
    CertPATHLENCONST = -2146762492,
    CertCRITICAL = -2146762491,
    CertPURPOSE = -2146762490,
    CertISSUERCHAINING = -2146762489,
    CertMALFORMED = -2146762488,
    CertUNTRUSTEDROOT = -2146762487,
    CertCHAINING = -2146762486,
    CertREVOKED = -2146762484,
    CertUNTRUSTEDTESTROOT = -2146762483,
    CertREVOCATION_FAILURE = -2146762482,
    CertCN_NO_MATCH = -2146762481,
    CertWRONG_USAGE = -2146762480,
    TrustEXPLICITDISTRUST = -2146762479,
    CertUNTRUSTEDCA = -2146762478,
    CertINVALIDPOLICY = -2146762477,
    CertINVALIDNAME = -2146762476,
    CryptNOREVOCATIONCHECK = -2146885614,
    CryptREVOCATIONOFFLINE = -2146885613,
    TrustSYSTEMERROR = -2146869247,
    TrustNOSIGNERCERT = -2146869246,
    TrustCOUNTERSIGNER = -2146869245,
    TrustCERTSIGNATURE = -2146869244,
    TrustTIMESTAMP = -2146869243,
    TrustBADDIGEST = -2146869232,
    TrustBASICCONSTRAINTS = -2146869223,
    TrustFINANCIALCRITERIA = -2146869218,
};
#endif
#if !defined(IL2CPP_STRUCT_CertificateProblem__Enum_FWDDECL)
#define IL2CPP_STRUCT_CertificateProblem__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CertificateProblem__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateProblem__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CertificateProblem__Enum_FWDDECL)
#include <Modloader/app/structs/CertificateProblem__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CertificateProblem__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
