#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericAttackable_DEFINED)
#include <Modloader/app/structs/GenericAttackable__Fields.h>
#if defined(IL2CPP_STRUCT_GenericAttackable__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericAttackable_DEFINED
struct GenericAttackable__Class;
struct GenericAttackable {
    struct GenericAttackable__Class* klass;
    MonitorData* monitor;
    struct GenericAttackable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericAttackable_FWDDECL)
#define IL2CPP_STRUCT_GenericAttackable_FWDDECL
#include <Modloader/app/structs/GenericAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericAttackable_DEFINED) && !defined(IL2CPP_STRUCT_GenericAttackable_FWDDECL)
#include <Modloader/app/structs/GenericAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
