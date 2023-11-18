#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGlowAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGlowAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGlowAttackable_DEFINED)
#define IL2CPP_STRUCT_IGlowAttackable_DEFINED
struct IGlowAttackable__Class;
struct IGlowAttackable {
    struct IGlowAttackable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGlowAttackable_FWDDECL)
#define IL2CPP_STRUCT_IGlowAttackable_FWDDECL
#include <Modloader/app/structs/IGlowAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_IGlowAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGlowAttackable_DEFINED) && !defined(IL2CPP_STRUCT_IGlowAttackable_FWDDECL)
#include <Modloader/app/structs/IGlowAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGlowAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
