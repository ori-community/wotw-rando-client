#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBowAttack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBowAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowAttack_DEFINED)
#include <Modloader/app/structs/SeinBowAttack__Fields.h>
#if defined(IL2CPP_STRUCT_SeinBowAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinBowAttack_DEFINED
struct SeinBowAttack__Class;
struct SeinBowAttack {
    struct SeinBowAttack__Class* klass;
    MonitorData* monitor;
    struct SeinBowAttack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBowAttack_FWDDECL)
#define IL2CPP_STRUCT_SeinBowAttack_FWDDECL
#include <Modloader/app/structs/SeinBowAttack__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinBowAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowAttack_DEFINED) && !defined(IL2CPP_STRUCT_SeinBowAttack_FWDDECL)
#include <Modloader/app/structs/SeinBowAttack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBowAttack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
