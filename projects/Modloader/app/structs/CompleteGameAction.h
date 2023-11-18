#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompleteGameAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompleteGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompleteGameAction_DEFINED)
#include <Modloader/app/structs/CompleteGameAction__Fields.h>
#if defined(IL2CPP_STRUCT_CompleteGameAction__Fields_DEFINED)
#define IL2CPP_STRUCT_CompleteGameAction_DEFINED
struct CompleteGameAction__Class;
struct CompleteGameAction {
    struct CompleteGameAction__Class* klass;
    MonitorData* monitor;
    struct CompleteGameAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompleteGameAction_FWDDECL)
#define IL2CPP_STRUCT_CompleteGameAction_FWDDECL
#include <Modloader/app/structs/CompleteGameAction__Class.h>
#endif
#undef IL2CPP_STRUCT_CompleteGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompleteGameAction_DEFINED) && !defined(IL2CPP_STRUCT_CompleteGameAction_FWDDECL)
#include <Modloader/app/structs/CompleteGameAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompleteGameAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
