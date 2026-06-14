#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringResultHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringResultHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringResultHandler_DEFINED)
#include <Modloader/app/structs/StringResultHandler__Fields.h>
#if defined(IL2CPP_STRUCT_StringResultHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_StringResultHandler_DEFINED
struct StringResultHandler__Class;
struct StringResultHandler {
    struct StringResultHandler__Class* klass;
    MonitorData* monitor;
    struct StringResultHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringResultHandler_FWDDECL)
#define IL2CPP_STRUCT_StringResultHandler_FWDDECL
#include <Modloader/app/structs/StringResultHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_StringResultHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringResultHandler_DEFINED) && !defined(IL2CPP_STRUCT_StringResultHandler_FWDDECL)
#include <Modloader/app/structs/StringResultHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringResultHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
