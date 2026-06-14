#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSettings_DEFINED)
#include <Modloader/app/structs/MeleeComboMoveSettings__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeComboMoveSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveSettings_DEFINED
struct MeleeComboMoveSettings__Class;
struct MeleeComboMoveSettings {
    struct MeleeComboMoveSettings__Class* klass;
    MonitorData* monitor;
    struct MeleeComboMoveSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSettings_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveSettings_FWDDECL
#include <Modloader/app/structs/MeleeComboMoveSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSettings_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveSettings_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
