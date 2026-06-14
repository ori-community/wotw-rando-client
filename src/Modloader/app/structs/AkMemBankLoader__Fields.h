#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMemBankLoader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMemBankLoader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMemBankLoader__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_AkMemBankLoader__Fields_DEFINED
struct String;
struct UnityWebRequest;
struct AkMemBankLoader__Fields {
    struct MonoBehaviour__Fields _;
    struct String* bankName;
    bool isLocalizedBank;
    struct String* m_bankPath;
    uint32_t ms_bankID;
    void* ms_pInMemoryBankPtr;
    struct GCHandle ms_pinnedArray;
    struct UnityWebRequest* ms_www;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMemBankLoader__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkMemBankLoader__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityWebRequest.h>
#endif
#undef IL2CPP_STRUCT_AkMemBankLoader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMemBankLoader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkMemBankLoader__Fields_FWDDECL)
#include <Modloader/app/structs/AkMemBankLoader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMemBankLoader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
