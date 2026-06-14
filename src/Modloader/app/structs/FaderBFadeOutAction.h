#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaderBFadeOutAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaderBFadeOutAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderBFadeOutAction_DEFINED)
#include <Modloader/app/structs/FaderBFadeOutAction__Fields.h>
#if defined(IL2CPP_STRUCT_FaderBFadeOutAction__Fields_DEFINED)
#define IL2CPP_STRUCT_FaderBFadeOutAction_DEFINED
struct FaderBFadeOutAction__Class;
struct FaderBFadeOutAction {
    struct FaderBFadeOutAction__Class* klass;
    MonitorData* monitor;
    struct FaderBFadeOutAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaderBFadeOutAction_FWDDECL)
#define IL2CPP_STRUCT_FaderBFadeOutAction_FWDDECL
#include <Modloader/app/structs/FaderBFadeOutAction__Class.h>
#endif
#undef IL2CPP_STRUCT_FaderBFadeOutAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderBFadeOutAction_DEFINED) && !defined(IL2CPP_STRUCT_FaderBFadeOutAction_FWDDECL)
#include <Modloader/app/structs/FaderBFadeOutAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaderBFadeOutAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
