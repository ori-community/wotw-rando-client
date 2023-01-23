#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMove_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMove_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMove_DEFINED)
#include <Modloader/app/structs/MeleeComboMove__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeComboMove__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMove_DEFINED
struct MeleeComboMove__Class;
struct MeleeComboMove {
    struct MeleeComboMove__Class* klass;
    MonitorData* monitor;
    struct MeleeComboMove__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMove_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMove_FWDDECL
#include <Modloader/app/structs/MeleeComboMove__Class.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMove_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMove_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMove_FWDDECL)
#include <Modloader/app/structs/MeleeComboMove.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMove.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
