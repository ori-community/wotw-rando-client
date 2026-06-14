#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxLiveIdentityUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxLiveIdentityUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxLiveIdentityUI_DEFINED)
#include <Modloader/app/structs/XboxLiveIdentityUI__Fields.h>
#if defined(IL2CPP_STRUCT_XboxLiveIdentityUI__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxLiveIdentityUI_DEFINED
struct XboxLiveIdentityUI__Class;
struct XboxLiveIdentityUI {
    struct XboxLiveIdentityUI__Class* klass;
    MonitorData* monitor;
    struct XboxLiveIdentityUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxLiveIdentityUI_FWDDECL)
#define IL2CPP_STRUCT_XboxLiveIdentityUI_FWDDECL
#include <Modloader/app/structs/XboxLiveIdentityUI__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxLiveIdentityUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxLiveIdentityUI_DEFINED) && !defined(IL2CPP_STRUCT_XboxLiveIdentityUI_FWDDECL)
#include <Modloader/app/structs/XboxLiveIdentityUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxLiveIdentityUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
