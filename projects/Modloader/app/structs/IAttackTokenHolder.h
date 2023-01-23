#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAttackTokenHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAttackTokenHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAttackTokenHolder_DEFINED)
#define IL2CPP_STRUCT_IAttackTokenHolder_DEFINED
struct IAttackTokenHolder__Class;
struct IAttackTokenHolder {
    struct IAttackTokenHolder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAttackTokenHolder_FWDDECL)
#define IL2CPP_STRUCT_IAttackTokenHolder_FWDDECL
#include <Modloader/app/structs/IAttackTokenHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_IAttackTokenHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAttackTokenHolder_DEFINED) && !defined(IL2CPP_STRUCT_IAttackTokenHolder_FWDDECL)
#include <Modloader/app/structs/IAttackTokenHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAttackTokenHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
