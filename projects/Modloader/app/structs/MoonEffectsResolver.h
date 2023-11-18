#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectsResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectsResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectsResolver_DEFINED)
#define IL2CPP_STRUCT_MoonEffectsResolver_DEFINED
struct MoonEffectsResolver__Class;
struct MoonEffectsResolver {
    struct MoonEffectsResolver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectsResolver_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectsResolver_FWDDECL
#include <Modloader/app/structs/MoonEffectsResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonEffectsResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectsResolver_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectsResolver_FWDDECL)
#include <Modloader/app/structs/MoonEffectsResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectsResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
