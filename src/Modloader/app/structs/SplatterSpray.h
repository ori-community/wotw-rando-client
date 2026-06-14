#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SplatterSpray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SplatterSpray_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplatterSpray_DEFINED)
#include <Modloader/app/structs/SplatterSpray__Fields.h>
#if defined(IL2CPP_STRUCT_SplatterSpray__Fields_DEFINED)
#define IL2CPP_STRUCT_SplatterSpray_DEFINED
struct SplatterSpray__Class;
struct SplatterSpray {
    struct SplatterSpray__Class* klass;
    MonitorData* monitor;
    struct SplatterSpray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SplatterSpray_FWDDECL)
#define IL2CPP_STRUCT_SplatterSpray_FWDDECL
#include <Modloader/app/structs/SplatterSpray__Class.h>
#endif
#undef IL2CPP_STRUCT_SplatterSpray_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplatterSpray_DEFINED) && !defined(IL2CPP_STRUCT_SplatterSpray_FWDDECL)
#include <Modloader/app/structs/SplatterSpray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SplatterSpray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
