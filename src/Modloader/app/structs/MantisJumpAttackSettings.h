#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisJumpAttackSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisJumpAttackSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisJumpAttackSettings_DEFINED)
#include <Modloader/app/structs/MantisJumpAttackSettings__Fields.h>
#if defined(IL2CPP_STRUCT_MantisJumpAttackSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MantisJumpAttackSettings_DEFINED
struct MantisJumpAttackSettings__Class;
struct MantisJumpAttackSettings {
    struct MantisJumpAttackSettings__Class* klass;
    MonitorData* monitor;
    struct MantisJumpAttackSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisJumpAttackSettings_FWDDECL)
#define IL2CPP_STRUCT_MantisJumpAttackSettings_FWDDECL
#include <Modloader/app/structs/MantisJumpAttackSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MantisJumpAttackSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisJumpAttackSettings_DEFINED) && !defined(IL2CPP_STRUCT_MantisJumpAttackSettings_FWDDECL)
#include <Modloader/app/structs/MantisJumpAttackSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisJumpAttackSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
