#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectPools_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectPools_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectPools_DEFINED)
#define IL2CPP_STRUCT_MoonEffectPools_DEFINED
struct MoonEffectPools__Class;
struct MoonEffectPools {
    struct MoonEffectPools__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectPools_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectPools_FWDDECL
#include <Modloader/app/structs/MoonEffectPools__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonEffectPools_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectPools_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectPools_FWDDECL)
#include <Modloader/app/structs/MoonEffectPools.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectPools.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
