#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerGenericAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerGenericAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerGenericAttackable_DEFINED)
#include <Modloader/app/structs/ServerGenericAttackable__Fields.h>
#if defined(IL2CPP_STRUCT_ServerGenericAttackable__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerGenericAttackable_DEFINED
struct ServerGenericAttackable__Class;
struct ServerGenericAttackable {
    struct ServerGenericAttackable__Class* klass;
    MonitorData* monitor;
    struct ServerGenericAttackable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerGenericAttackable_FWDDECL)
#define IL2CPP_STRUCT_ServerGenericAttackable_FWDDECL
#include <Modloader/app/structs/ServerGenericAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerGenericAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerGenericAttackable_DEFINED) && !defined(IL2CPP_STRUCT_ServerGenericAttackable_FWDDECL)
#include <Modloader/app/structs/ServerGenericAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerGenericAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
