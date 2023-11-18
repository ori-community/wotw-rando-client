#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenWriteCompletedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenWriteCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenWriteCompletedEventHandler_DEFINED)
#include <Modloader/app/structs/OpenWriteCompletedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_OpenWriteCompletedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_OpenWriteCompletedEventHandler_DEFINED
struct OpenWriteCompletedEventHandler__Class;
struct OpenWriteCompletedEventHandler {
    struct OpenWriteCompletedEventHandler__Class* klass;
    MonitorData* monitor;
    struct OpenWriteCompletedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OpenWriteCompletedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_OpenWriteCompletedEventHandler_FWDDECL
#include <Modloader/app/structs/OpenWriteCompletedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_OpenWriteCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenWriteCompletedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_OpenWriteCompletedEventHandler_FWDDECL)
#include <Modloader/app/structs/OpenWriteCompletedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenWriteCompletedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
