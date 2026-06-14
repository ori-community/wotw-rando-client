#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeaderHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeaderHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderHandler_DEFINED)
#include <Modloader/app/structs/HeaderHandler__Fields.h>
#if defined(IL2CPP_STRUCT_HeaderHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_HeaderHandler_DEFINED
struct HeaderHandler__Class;
struct HeaderHandler {
    struct HeaderHandler__Class* klass;
    MonitorData* monitor;
    struct HeaderHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeaderHandler_FWDDECL)
#define IL2CPP_STRUCT_HeaderHandler_FWDDECL
#include <Modloader/app/structs/HeaderHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_HeaderHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderHandler_DEFINED) && !defined(IL2CPP_STRUCT_HeaderHandler_FWDDECL)
#include <Modloader/app/structs/HeaderHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeaderHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
