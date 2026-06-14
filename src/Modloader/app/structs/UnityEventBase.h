#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityEventBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityEventBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityEventBase_DEFINED)
#include <Modloader/app/structs/UnityEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_UnityEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityEventBase_DEFINED
struct UnityEventBase__Class;
struct UnityEventBase {
    struct UnityEventBase__Class* klass;
    MonitorData* monitor;
    struct UnityEventBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityEventBase_FWDDECL)
#define IL2CPP_STRUCT_UnityEventBase_FWDDECL
#include <Modloader/app/structs/UnityEventBase__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityEventBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityEventBase_DEFINED) && !defined(IL2CPP_STRUCT_UnityEventBase_FWDDECL)
#include <Modloader/app/structs/UnityEventBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityEventBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
