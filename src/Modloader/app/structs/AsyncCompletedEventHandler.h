#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncCompletedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncCompletedEventHandler_DEFINED)
#include <Modloader/app/structs/AsyncCompletedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncCompletedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncCompletedEventHandler_DEFINED
struct AsyncCompletedEventHandler__Class;
struct AsyncCompletedEventHandler {
    struct AsyncCompletedEventHandler__Class* klass;
    MonitorData* monitor;
    struct AsyncCompletedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncCompletedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_AsyncCompletedEventHandler_FWDDECL
#include <Modloader/app/structs/AsyncCompletedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncCompletedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_AsyncCompletedEventHandler_FWDDECL)
#include <Modloader/app/structs/AsyncCompletedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncCompletedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
