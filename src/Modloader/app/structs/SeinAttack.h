#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinAttack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAttack_DEFINED)
#include <Modloader/app/structs/SeinAttack__Fields.h>
#if defined(IL2CPP_STRUCT_SeinAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinAttack_DEFINED
struct SeinAttack__Class;
struct SeinAttack {
    struct SeinAttack__Class* klass;
    MonitorData* monitor;
    struct SeinAttack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinAttack_FWDDECL)
#define IL2CPP_STRUCT_SeinAttack_FWDDECL
#include <Modloader/app/structs/SeinAttack__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAttack_DEFINED) && !defined(IL2CPP_STRUCT_SeinAttack_FWDDECL)
#include <Modloader/app/structs/SeinAttack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinAttack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
