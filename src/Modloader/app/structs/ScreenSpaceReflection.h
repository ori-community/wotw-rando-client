#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenSpaceReflection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenSpaceReflection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_DEFINED)
#include <Modloader/app/structs/ScreenSpaceReflection__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenSpaceReflection__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenSpaceReflection_DEFINED
struct ScreenSpaceReflection__Class;
struct ScreenSpaceReflection {
    struct ScreenSpaceReflection__Class* klass;
    MonitorData* monitor;
    struct ScreenSpaceReflection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_FWDDECL)
#define IL2CPP_STRUCT_ScreenSpaceReflection_FWDDECL
#include <Modloader/app/structs/ScreenSpaceReflection__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenSpaceReflection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_DEFINED) && !defined(IL2CPP_STRUCT_ScreenSpaceReflection_FWDDECL)
#include <Modloader/app/structs/ScreenSpaceReflection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenSpaceReflection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
