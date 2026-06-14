#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCallbackBaseVTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCallbackBaseVTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCallbackBaseVTable_DEFINED)
#include <Modloader/app/structs/CCallbackBaseVTable__Fields.h>
#if defined(IL2CPP_STRUCT_CCallbackBaseVTable__Fields_DEFINED)
#define IL2CPP_STRUCT_CCallbackBaseVTable_DEFINED
struct CCallbackBaseVTable__Class;
struct CCallbackBaseVTable {
    struct CCallbackBaseVTable__Class* klass;
    MonitorData* monitor;
    struct CCallbackBaseVTable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCallbackBaseVTable_FWDDECL)
#define IL2CPP_STRUCT_CCallbackBaseVTable_FWDDECL
#include <Modloader/app/structs/CCallbackBaseVTable__Class.h>
#endif
#undef IL2CPP_STRUCT_CCallbackBaseVTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCallbackBaseVTable_DEFINED) && !defined(IL2CPP_STRUCT_CCallbackBaseVTable_FWDDECL)
#include <Modloader/app/structs/CCallbackBaseVTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCallbackBaseVTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
