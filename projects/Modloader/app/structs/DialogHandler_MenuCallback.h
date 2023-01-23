#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogHandler_MenuCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogHandler_MenuCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogHandler_MenuCallback_DEFINED)
#include <Modloader/app/structs/DialogHandler_MenuCallback__Fields.h>
#if defined(IL2CPP_STRUCT_DialogHandler_MenuCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogHandler_MenuCallback_DEFINED
struct DialogHandler_MenuCallback__Class;
struct DialogHandler_MenuCallback {
    struct DialogHandler_MenuCallback__Class* klass;
    MonitorData* monitor;
    struct DialogHandler_MenuCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DialogHandler_MenuCallback_FWDDECL)
#define IL2CPP_STRUCT_DialogHandler_MenuCallback_FWDDECL
#include <Modloader/app/structs/DialogHandler_MenuCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_DialogHandler_MenuCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogHandler_MenuCallback_DEFINED) && !defined(IL2CPP_STRUCT_DialogHandler_MenuCallback_FWDDECL)
#include <Modloader/app/structs/DialogHandler_MenuCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogHandler_MenuCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
