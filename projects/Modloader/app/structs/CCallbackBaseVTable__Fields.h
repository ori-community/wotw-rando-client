#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCallbackBaseVTable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCallbackBaseVTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCallbackBaseVTable__Fields_DEFINED)
#define IL2CPP_STRUCT_CCallbackBaseVTable__Fields_DEFINED
struct CCallbackBaseVTable_RunCRDel;
struct CCallbackBaseVTable_RunCBDel;
struct CCallbackBaseVTable_GetCallbackSizeBytesDel;
struct __declspec(align(8)) CCallbackBaseVTable__Fields {
    struct CCallbackBaseVTable_RunCRDel* m_RunCallResult;
    struct CCallbackBaseVTable_RunCBDel* m_RunCallback;
    struct CCallbackBaseVTable_GetCallbackSizeBytesDel* m_GetCallbackSizeBytes;
};
#endif
#if !defined(IL2CPP_STRUCT_CCallbackBaseVTable__Fields_FWDDECL)
#define IL2CPP_STRUCT_CCallbackBaseVTable__Fields_FWDDECL
#include <Modloader/app/structs/CCallbackBaseVTable_GetCallbackSizeBytesDel.h>
#include <Modloader/app/structs/CCallbackBaseVTable_RunCBDel.h>
#include <Modloader/app/structs/CCallbackBaseVTable_RunCRDel.h>
#endif
#undef IL2CPP_STRUCT_CCallbackBaseVTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCallbackBaseVTable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CCallbackBaseVTable__Fields_FWDDECL)
#include <Modloader/app/structs/CCallbackBaseVTable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCallbackBaseVTable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
