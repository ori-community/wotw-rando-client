#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxLiveLoginScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxLiveLoginScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxLiveLoginScreen_DEFINED)
#include <Modloader/app/structs/XboxLiveLoginScreen__Fields.h>
#if defined(IL2CPP_STRUCT_XboxLiveLoginScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxLiveLoginScreen_DEFINED
struct XboxLiveLoginScreen__Class;
struct XboxLiveLoginScreen {
    struct XboxLiveLoginScreen__Class* klass;
    MonitorData* monitor;
    struct XboxLiveLoginScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxLiveLoginScreen_FWDDECL)
#define IL2CPP_STRUCT_XboxLiveLoginScreen_FWDDECL
#include <Modloader/app/structs/XboxLiveLoginScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxLiveLoginScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxLiveLoginScreen_DEFINED) && !defined(IL2CPP_STRUCT_XboxLiveLoginScreen_FWDDECL)
#include <Modloader/app/structs/XboxLiveLoginScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxLiveLoginScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
