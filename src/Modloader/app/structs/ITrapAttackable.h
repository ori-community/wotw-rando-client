#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITrapAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITrapAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrapAttackable_DEFINED)
#define IL2CPP_STRUCT_ITrapAttackable_DEFINED
struct ITrapAttackable__Class;
struct ITrapAttackable {
    struct ITrapAttackable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITrapAttackable_FWDDECL)
#define IL2CPP_STRUCT_ITrapAttackable_FWDDECL
#include <Modloader/app/structs/ITrapAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_ITrapAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrapAttackable_DEFINED) && !defined(IL2CPP_STRUCT_ITrapAttackable_FWDDECL)
#include <Modloader/app/structs/ITrapAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITrapAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
