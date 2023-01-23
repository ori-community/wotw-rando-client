#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogHandler__Fields_DEFINED
struct Browser;
struct DialogHandler_DialogCallback;
struct DialogHandler_MenuCallback;
struct DialogHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct Browser* parentBrowser;
    struct Browser* dialogBrowser;
    struct DialogHandler_DialogCallback* dialogCallback;
    struct DialogHandler_MenuCallback* contextCallback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DialogHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_DialogHandler__Fields_FWDDECL
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/DialogHandler_DialogCallback.h>
#include <Modloader/app/structs/DialogHandler_MenuCallback.h>
#endif
#undef IL2CPP_STRUCT_DialogHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DialogHandler__Fields_FWDDECL)
#include <Modloader/app/structs/DialogHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
