#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITorchAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITorchAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITorchAttackable_DEFINED)
#define IL2CPP_STRUCT_ITorchAttackable_DEFINED
struct ITorchAttackable__Class;
struct ITorchAttackable {
    struct ITorchAttackable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITorchAttackable_FWDDECL)
#define IL2CPP_STRUCT_ITorchAttackable_FWDDECL
#include <Modloader/app/structs/ITorchAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_ITorchAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITorchAttackable_DEFINED) && !defined(IL2CPP_STRUCT_ITorchAttackable_FWDDECL)
#include <Modloader/app/structs/ITorchAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITorchAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
