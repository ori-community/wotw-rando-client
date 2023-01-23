#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormModifier_DEFINED)
#include <Modloader/app/structs/SandWormModifier__Fields.h>
#if defined(IL2CPP_STRUCT_SandWormModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormModifier_DEFINED
struct SandWormModifier__Class;
struct SandWormModifier {
    struct SandWormModifier__Class* klass;
    MonitorData* monitor;
    struct SandWormModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormModifier_FWDDECL)
#define IL2CPP_STRUCT_SandWormModifier_FWDDECL
#include <Modloader/app/structs/SandWormModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_SandWormModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormModifier_DEFINED) && !defined(IL2CPP_STRUCT_SandWormModifier_FWDDECL)
#include <Modloader/app/structs/SandWormModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
