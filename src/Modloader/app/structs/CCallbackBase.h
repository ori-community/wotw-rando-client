#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCallbackBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCallbackBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCallbackBase_DEFINED)
#include <Modloader/app/structs/CCallbackBase__Fields.h>
#if defined(IL2CPP_STRUCT_CCallbackBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CCallbackBase_DEFINED
struct CCallbackBase__Class;
struct CCallbackBase {
    struct CCallbackBase__Class* klass;
    MonitorData* monitor;
    struct CCallbackBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCallbackBase_FWDDECL)
#define IL2CPP_STRUCT_CCallbackBase_FWDDECL
#include <Modloader/app/structs/CCallbackBase__Class.h>
#endif
#undef IL2CPP_STRUCT_CCallbackBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCallbackBase_DEFINED) && !defined(IL2CPP_STRUCT_CCallbackBase_FWDDECL)
#include <Modloader/app/structs/CCallbackBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCallbackBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
