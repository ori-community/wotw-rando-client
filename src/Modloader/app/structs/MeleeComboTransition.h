#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboTransition_DEFINED)
#include <Modloader/app/structs/MeleeComboTransition__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeComboTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeComboTransition_DEFINED
struct MeleeComboTransition__Class;
struct MeleeComboTransition {
    struct MeleeComboTransition__Class* klass;
    MonitorData* monitor;
    struct MeleeComboTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboTransition_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboTransition_FWDDECL
#include <Modloader/app/structs/MeleeComboTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboTransition_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboTransition_FWDDECL)
#include <Modloader/app/structs/MeleeComboTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
