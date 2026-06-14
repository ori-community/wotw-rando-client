#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkipCreditsAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkipCreditsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkipCreditsAction_DEFINED)
#include <Modloader/app/structs/SkipCreditsAction__Fields.h>
#if defined(IL2CPP_STRUCT_SkipCreditsAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SkipCreditsAction_DEFINED
struct SkipCreditsAction__Class;
struct SkipCreditsAction {
    struct SkipCreditsAction__Class* klass;
    MonitorData* monitor;
    struct SkipCreditsAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkipCreditsAction_FWDDECL)
#define IL2CPP_STRUCT_SkipCreditsAction_FWDDECL
#include <Modloader/app/structs/SkipCreditsAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SkipCreditsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkipCreditsAction_DEFINED) && !defined(IL2CPP_STRUCT_SkipCreditsAction_FWDDECL)
#include <Modloader/app/structs/SkipCreditsAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkipCreditsAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
