#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonEffectComponentCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonEffectComponentCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonEffectComponentCache_DEFINED)
#define IL2CPP_STRUCT_IMoonEffectComponentCache_DEFINED
struct IMoonEffectComponentCache__Class;
struct IMoonEffectComponentCache {
    struct IMoonEffectComponentCache__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonEffectComponentCache_FWDDECL)
#define IL2CPP_STRUCT_IMoonEffectComponentCache_FWDDECL
#include <Modloader/app/structs/IMoonEffectComponentCache__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonEffectComponentCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonEffectComponentCache_DEFINED) && !defined(IL2CPP_STRUCT_IMoonEffectComponentCache_FWDDECL)
#include <Modloader/app/structs/IMoonEffectComponentCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonEffectComponentCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
