#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Application__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Application__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Application__StaticFields_DEFINED
struct Application_LowMemoryCallback;
struct Application_ControllerStateChanged;
struct Application_LogCallback;
struct Action_1_Boolean_;
struct Func_1_Boolean_;
struct Action;
struct Application__StaticFields {
    struct Application_LowMemoryCallback* lowMemory;
    struct Application_ControllerStateChanged* controllerStateChanged;
    struct Application_LogCallback* s_LogCallbackHandler;
    struct Application_LogCallback* s_LogCallbackHandlerThreaded;
    struct Action_1_Boolean_* focusChanged;
    struct Func_1_Boolean_* wantsToQuit;
    struct Action* quitting;
};
#endif
#if !defined(IL2CPP_STRUCT_Application__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Application__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/Application_ControllerStateChanged.h>
#include <Modloader/app/structs/Application_LogCallback.h>
#include <Modloader/app/structs/Application_LowMemoryCallback.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_Application__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Application__StaticFields_FWDDECL)
#include <Modloader/app/structs/Application__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Application__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
