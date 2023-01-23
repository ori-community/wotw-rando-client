#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReverseSceneLoadingZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReverseSceneLoadingZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReverseSceneLoadingZone_DEFINED)
#include <Modloader/app/structs/ReverseSceneLoadingZone__Fields.h>
#if defined(IL2CPP_STRUCT_ReverseSceneLoadingZone__Fields_DEFINED)
#define IL2CPP_STRUCT_ReverseSceneLoadingZone_DEFINED
struct ReverseSceneLoadingZone__Class;
struct ReverseSceneLoadingZone {
    struct ReverseSceneLoadingZone__Class* klass;
    MonitorData* monitor;
    struct ReverseSceneLoadingZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReverseSceneLoadingZone_FWDDECL)
#define IL2CPP_STRUCT_ReverseSceneLoadingZone_FWDDECL
#include <Modloader/app/structs/ReverseSceneLoadingZone__Class.h>
#endif
#undef IL2CPP_STRUCT_ReverseSceneLoadingZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReverseSceneLoadingZone_DEFINED) && !defined(IL2CPP_STRUCT_ReverseSceneLoadingZone_FWDDECL)
#include <Modloader/app/structs/ReverseSceneLoadingZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReverseSceneLoadingZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
