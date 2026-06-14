#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseEventSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseEventSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_DEFINED)
#include <Modloader/app/structs/WwiseEventSystem__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseEventSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseEventSystem_DEFINED
struct WwiseEventSystem__Class;
struct WwiseEventSystem {
    struct WwiseEventSystem__Class* klass;
    MonitorData* monitor;
    struct WwiseEventSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_FWDDECL)
#define IL2CPP_STRUCT_WwiseEventSystem_FWDDECL
#include <Modloader/app/structs/WwiseEventSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_WwiseEventSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_DEFINED) && !defined(IL2CPP_STRUCT_WwiseEventSystem_FWDDECL)
#include <Modloader/app/structs/WwiseEventSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseEventSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
