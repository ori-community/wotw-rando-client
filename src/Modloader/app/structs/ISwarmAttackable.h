#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISwarmAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISwarmAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISwarmAttackable_DEFINED)
#define IL2CPP_STRUCT_ISwarmAttackable_DEFINED
struct ISwarmAttackable__Class;
struct ISwarmAttackable {
    struct ISwarmAttackable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISwarmAttackable_FWDDECL)
#define IL2CPP_STRUCT_ISwarmAttackable_FWDDECL
#include <Modloader/app/structs/ISwarmAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_ISwarmAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISwarmAttackable_DEFINED) && !defined(IL2CPP_STRUCT_ISwarmAttackable_FWDDECL)
#include <Modloader/app/structs/ISwarmAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISwarmAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
