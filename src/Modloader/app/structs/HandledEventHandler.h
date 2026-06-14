#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandledEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandledEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandledEventHandler_DEFINED)
#include <Modloader/app/structs/HandledEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_HandledEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_HandledEventHandler_DEFINED
struct HandledEventHandler__Class;
struct HandledEventHandler {
    struct HandledEventHandler__Class* klass;
    MonitorData* monitor;
    struct HandledEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HandledEventHandler_FWDDECL)
#define IL2CPP_STRUCT_HandledEventHandler_FWDDECL
#include <Modloader/app/structs/HandledEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_HandledEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandledEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_HandledEventHandler_FWDDECL)
#include <Modloader/app/structs/HandledEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandledEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
