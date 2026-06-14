#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartDamageCheckAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartDamageCheckAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartDamageCheckAction_DEFINED)
#include <Modloader/app/structs/CartDamageCheckAction__Fields.h>
#if defined(IL2CPP_STRUCT_CartDamageCheckAction__Fields_DEFINED)
#define IL2CPP_STRUCT_CartDamageCheckAction_DEFINED
struct CartDamageCheckAction__Class;
struct CartDamageCheckAction {
    struct CartDamageCheckAction__Class* klass;
    MonitorData* monitor;
    struct CartDamageCheckAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartDamageCheckAction_FWDDECL)
#define IL2CPP_STRUCT_CartDamageCheckAction_FWDDECL
#include <Modloader/app/structs/CartDamageCheckAction__Class.h>
#endif
#undef IL2CPP_STRUCT_CartDamageCheckAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartDamageCheckAction_DEFINED) && !defined(IL2CPP_STRUCT_CartDamageCheckAction_FWDDECL)
#include <Modloader/app/structs/CartDamageCheckAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartDamageCheckAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
