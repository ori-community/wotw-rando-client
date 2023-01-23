#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteStreamClosedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteStreamClosedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteStreamClosedEventHandler_DEFINED)
#include <Modloader/app/structs/WriteStreamClosedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_WriteStreamClosedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteStreamClosedEventHandler_DEFINED
struct WriteStreamClosedEventHandler__Class;
struct WriteStreamClosedEventHandler {
    struct WriteStreamClosedEventHandler__Class* klass;
    MonitorData* monitor;
    struct WriteStreamClosedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteStreamClosedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_WriteStreamClosedEventHandler_FWDDECL
#include <Modloader/app/structs/WriteStreamClosedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteStreamClosedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteStreamClosedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_WriteStreamClosedEventHandler_FWDDECL)
#include <Modloader/app/structs/WriteStreamClosedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteStreamClosedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
