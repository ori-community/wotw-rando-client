#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimatorSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimatorSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorSystem_DEFINED)
#include <Modloader/app/structs/MoonAnimatorSystem__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimatorSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimatorSystem_DEFINED
struct MoonAnimatorSystem__Class;
struct MoonAnimatorSystem {
    struct MoonAnimatorSystem__Class* klass;
    MonitorData* monitor;
    struct MoonAnimatorSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimatorSystem_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimatorSystem_FWDDECL
#include <Modloader/app/structs/MoonAnimatorSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimatorSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorSystem_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimatorSystem_FWDDECL)
#include <Modloader/app/structs/MoonAnimatorSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimatorSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
