#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RefreshEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RefreshEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefreshEventHandler_DEFINED)
#include <Modloader/app/structs/RefreshEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_RefreshEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_RefreshEventHandler_DEFINED
struct RefreshEventHandler__Class;
struct RefreshEventHandler {
    struct RefreshEventHandler__Class* klass;
    MonitorData* monitor;
    struct RefreshEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RefreshEventHandler_FWDDECL)
#define IL2CPP_STRUCT_RefreshEventHandler_FWDDECL
#include <Modloader/app/structs/RefreshEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_RefreshEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefreshEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_RefreshEventHandler_FWDDECL)
#include <Modloader/app/structs/RefreshEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RefreshEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
