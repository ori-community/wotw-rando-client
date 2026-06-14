#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaderBCustomFadeAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaderBCustomFadeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderBCustomFadeAction_DEFINED)
#include <Modloader/app/structs/FaderBCustomFadeAction__Fields.h>
#if defined(IL2CPP_STRUCT_FaderBCustomFadeAction__Fields_DEFINED)
#define IL2CPP_STRUCT_FaderBCustomFadeAction_DEFINED
struct FaderBCustomFadeAction__Class;
struct FaderBCustomFadeAction {
    struct FaderBCustomFadeAction__Class* klass;
    MonitorData* monitor;
    struct FaderBCustomFadeAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaderBCustomFadeAction_FWDDECL)
#define IL2CPP_STRUCT_FaderBCustomFadeAction_FWDDECL
#include <Modloader/app/structs/FaderBCustomFadeAction__Class.h>
#endif
#undef IL2CPP_STRUCT_FaderBCustomFadeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderBCustomFadeAction_DEFINED) && !defined(IL2CPP_STRUCT_FaderBCustomFadeAction_FWDDECL)
#include <Modloader/app/structs/FaderBCustomFadeAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaderBCustomFadeAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
