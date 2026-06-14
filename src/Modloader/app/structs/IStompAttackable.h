#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IStompAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IStompAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStompAttackable_DEFINED)
#define IL2CPP_STRUCT_IStompAttackable_DEFINED
struct IStompAttackable__Class;
struct IStompAttackable {
    struct IStompAttackable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IStompAttackable_FWDDECL)
#define IL2CPP_STRUCT_IStompAttackable_FWDDECL
#include <Modloader/app/structs/IStompAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_IStompAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStompAttackable_DEFINED) && !defined(IL2CPP_STRUCT_IStompAttackable_FWDDECL)
#include <Modloader/app/structs/IStompAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IStompAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
