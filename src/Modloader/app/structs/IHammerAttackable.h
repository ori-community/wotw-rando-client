#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IHammerAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IHammerAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHammerAttackable_DEFINED)
#define IL2CPP_STRUCT_IHammerAttackable_DEFINED
struct IHammerAttackable__Class;
struct IHammerAttackable {
    struct IHammerAttackable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IHammerAttackable_FWDDECL)
#define IL2CPP_STRUCT_IHammerAttackable_FWDDECL
#include <Modloader/app/structs/IHammerAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_IHammerAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHammerAttackable_DEFINED) && !defined(IL2CPP_STRUCT_IHammerAttackable_FWDDECL)
#include <Modloader/app/structs/IHammerAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IHammerAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
