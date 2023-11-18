#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonEffectPoolable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonEffectPoolable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonEffectPoolable_DEFINED)
#define IL2CPP_STRUCT_IMoonEffectPoolable_DEFINED
struct IMoonEffectPoolable__Class;
struct IMoonEffectPoolable {
    struct IMoonEffectPoolable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonEffectPoolable_FWDDECL)
#define IL2CPP_STRUCT_IMoonEffectPoolable_FWDDECL
#include <Modloader/app/structs/IMoonEffectPoolable__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonEffectPoolable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonEffectPoolable_DEFINED) && !defined(IL2CPP_STRUCT_IMoonEffectPoolable_FWDDECL)
#include <Modloader/app/structs/IMoonEffectPoolable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonEffectPoolable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
