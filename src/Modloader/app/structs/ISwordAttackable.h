#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISwordAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISwordAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISwordAttackable_DEFINED)
#define IL2CPP_STRUCT_ISwordAttackable_DEFINED
struct ISwordAttackable__Class;
struct ISwordAttackable {
    struct ISwordAttackable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISwordAttackable_FWDDECL)
#define IL2CPP_STRUCT_ISwordAttackable_FWDDECL
#include <Modloader/app/structs/ISwordAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_ISwordAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISwordAttackable_DEFINED) && !defined(IL2CPP_STRUCT_ISwordAttackable_FWDDECL)
#include <Modloader/app/structs/ISwordAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISwordAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
