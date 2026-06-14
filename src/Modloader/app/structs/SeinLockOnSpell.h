#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLockOnSpell_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLockOnSpell_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLockOnSpell_DEFINED)
#include <Modloader/app/structs/SeinLockOnSpell__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLockOnSpell__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLockOnSpell_DEFINED
struct SeinLockOnSpell__Class;
struct SeinLockOnSpell {
    struct SeinLockOnSpell__Class* klass;
    MonitorData* monitor;
    struct SeinLockOnSpell__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLockOnSpell_FWDDECL)
#define IL2CPP_STRUCT_SeinLockOnSpell_FWDDECL
#include <Modloader/app/structs/SeinLockOnSpell__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLockOnSpell_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLockOnSpell_DEFINED) && !defined(IL2CPP_STRUCT_SeinLockOnSpell_FWDDECL)
#include <Modloader/app/structs/SeinLockOnSpell.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLockOnSpell.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
