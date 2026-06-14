#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectComponentCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectComponentCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectComponentCache_DEFINED)
#include <Modloader/app/structs/MoonEffectComponentCache__Fields.h>
#if defined(IL2CPP_STRUCT_MoonEffectComponentCache__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonEffectComponentCache_DEFINED
struct MoonEffectComponentCache__Class;
struct MoonEffectComponentCache {
    struct MoonEffectComponentCache__Class* klass;
    MonitorData* monitor;
    struct MoonEffectComponentCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectComponentCache_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectComponentCache_FWDDECL
#include <Modloader/app/structs/MoonEffectComponentCache__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonEffectComponentCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectComponentCache_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectComponentCache_FWDDECL)
#include <Modloader/app/structs/MoonEffectComponentCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectComponentCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
