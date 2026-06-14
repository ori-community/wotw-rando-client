#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWeaponsEffects_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWeaponsEffects_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWeaponsEffects_DEFINED)
#include <Modloader/app/structs/SeinWeaponsEffects__Fields.h>
#if defined(IL2CPP_STRUCT_SeinWeaponsEffects__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWeaponsEffects_DEFINED
struct SeinWeaponsEffects__Class;
struct SeinWeaponsEffects {
    struct SeinWeaponsEffects__Class* klass;
    MonitorData* monitor;
    struct SeinWeaponsEffects__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWeaponsEffects_FWDDECL)
#define IL2CPP_STRUCT_SeinWeaponsEffects_FWDDECL
#include <Modloader/app/structs/SeinWeaponsEffects__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinWeaponsEffects_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWeaponsEffects_DEFINED) && !defined(IL2CPP_STRUCT_SeinWeaponsEffects_FWDDECL)
#include <Modloader/app/structs/SeinWeaponsEffects.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWeaponsEffects.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
