#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetRotationFromDamage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetRotationFromDamage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetRotationFromDamage_DEFINED)
#include <Modloader/app/structs/SetRotationFromDamage__Fields.h>
#if defined(IL2CPP_STRUCT_SetRotationFromDamage__Fields_DEFINED)
#define IL2CPP_STRUCT_SetRotationFromDamage_DEFINED
struct SetRotationFromDamage__Class;
struct SetRotationFromDamage {
    struct SetRotationFromDamage__Class* klass;
    MonitorData* monitor;
    struct SetRotationFromDamage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetRotationFromDamage_FWDDECL)
#define IL2CPP_STRUCT_SetRotationFromDamage_FWDDECL
#include <Modloader/app/structs/SetRotationFromDamage__Class.h>
#endif
#undef IL2CPP_STRUCT_SetRotationFromDamage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetRotationFromDamage_DEFINED) && !defined(IL2CPP_STRUCT_SetRotationFromDamage_FWDDECL)
#include <Modloader/app/structs/SetRotationFromDamage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetRotationFromDamage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
