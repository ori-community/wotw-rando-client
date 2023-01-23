#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeepScenesLoaded_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeepScenesLoaded_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeepScenesLoaded_DEFINED)
#include <Modloader/app/structs/KeepScenesLoaded__Fields.h>
#if defined(IL2CPP_STRUCT_KeepScenesLoaded__Fields_DEFINED)
#define IL2CPP_STRUCT_KeepScenesLoaded_DEFINED
struct KeepScenesLoaded__Class;
struct KeepScenesLoaded {
    struct KeepScenesLoaded__Class* klass;
    MonitorData* monitor;
    struct KeepScenesLoaded__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeepScenesLoaded_FWDDECL)
#define IL2CPP_STRUCT_KeepScenesLoaded_FWDDECL
#include <Modloader/app/structs/KeepScenesLoaded__Class.h>
#endif
#undef IL2CPP_STRUCT_KeepScenesLoaded_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeepScenesLoaded_DEFINED) && !defined(IL2CPP_STRUCT_KeepScenesLoaded_FWDDECL)
#include <Modloader/app/structs/KeepScenesLoaded.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeepScenesLoaded.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
