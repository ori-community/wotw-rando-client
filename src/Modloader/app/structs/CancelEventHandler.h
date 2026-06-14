#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancelEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancelEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelEventHandler_DEFINED)
#include <Modloader/app/structs/CancelEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_CancelEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_CancelEventHandler_DEFINED
struct CancelEventHandler__Class;
struct CancelEventHandler {
    struct CancelEventHandler__Class* klass;
    MonitorData* monitor;
    struct CancelEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CancelEventHandler_FWDDECL)
#define IL2CPP_STRUCT_CancelEventHandler_FWDDECL
#include <Modloader/app/structs/CancelEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_CancelEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_CancelEventHandler_FWDDECL)
#include <Modloader/app/structs/CancelEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancelEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
