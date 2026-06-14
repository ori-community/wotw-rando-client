#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AtlassingSetting__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AtlassingSetting__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlassingSetting__Boxed_DEFINED)
#include <Modloader/app/structs/AtlassingSetting.h>
#if defined(IL2CPP_STRUCT_AtlassingSetting_DEFINED)
#define IL2CPP_STRUCT_AtlassingSetting__Boxed_DEFINED
struct AtlassingSetting__Class;
struct AtlassingSetting__Boxed {
    struct AtlassingSetting__Class* klass;
    MonitorData* monitor;
    struct AtlassingSetting fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AtlassingSetting__Boxed_FWDDECL)
#define IL2CPP_STRUCT_AtlassingSetting__Boxed_FWDDECL
#include <Modloader/app/structs/AtlassingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_AtlassingSetting__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlassingSetting__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_AtlassingSetting__Boxed_FWDDECL)
#include <Modloader/app/structs/AtlassingSetting__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AtlassingSetting__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
