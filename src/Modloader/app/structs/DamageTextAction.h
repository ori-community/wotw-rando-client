#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageTextAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageTextAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTextAction_DEFINED)
#include <Modloader/app/structs/DamageTextAction__Fields.h>
#if defined(IL2CPP_STRUCT_DamageTextAction__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageTextAction_DEFINED
struct DamageTextAction__Class;
struct DamageTextAction {
    struct DamageTextAction__Class* klass;
    MonitorData* monitor;
    struct DamageTextAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageTextAction_FWDDECL)
#define IL2CPP_STRUCT_DamageTextAction_FWDDECL
#include <Modloader/app/structs/DamageTextAction__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageTextAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTextAction_DEFINED) && !defined(IL2CPP_STRUCT_DamageTextAction_FWDDECL)
#include <Modloader/app/structs/DamageTextAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageTextAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
