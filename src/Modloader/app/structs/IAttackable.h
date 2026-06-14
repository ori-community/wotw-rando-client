#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAttackable_DEFINED)
#define IL2CPP_STRUCT_IAttackable_DEFINED
struct IAttackable__Class;
struct IAttackable {
    struct IAttackable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAttackable_FWDDECL)
#define IL2CPP_STRUCT_IAttackable_FWDDECL
#include <Modloader/app/structs/IAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_IAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAttackable_DEFINED) && !defined(IL2CPP_STRUCT_IAttackable_FWDDECL)
#include <Modloader/app/structs/IAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
