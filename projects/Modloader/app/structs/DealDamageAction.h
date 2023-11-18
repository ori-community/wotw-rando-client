#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DealDamageAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DealDamageAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageAction_DEFINED)
#include <Modloader/app/structs/DealDamageAction__Fields.h>
#if defined(IL2CPP_STRUCT_DealDamageAction__Fields_DEFINED)
#define IL2CPP_STRUCT_DealDamageAction_DEFINED
struct DealDamageAction__Class;
struct DealDamageAction {
    struct DealDamageAction__Class* klass;
    MonitorData* monitor;
    struct DealDamageAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DealDamageAction_FWDDECL)
#define IL2CPP_STRUCT_DealDamageAction_FWDDECL
#include <Modloader/app/structs/DealDamageAction__Class.h>
#endif
#undef IL2CPP_STRUCT_DealDamageAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageAction_DEFINED) && !defined(IL2CPP_STRUCT_DealDamageAction_FWDDECL)
#include <Modloader/app/structs/DealDamageAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DealDamageAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
