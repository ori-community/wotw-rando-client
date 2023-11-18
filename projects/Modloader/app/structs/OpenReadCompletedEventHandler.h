#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenReadCompletedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenReadCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenReadCompletedEventHandler_DEFINED)
#include <Modloader/app/structs/OpenReadCompletedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_OpenReadCompletedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_OpenReadCompletedEventHandler_DEFINED
struct OpenReadCompletedEventHandler__Class;
struct OpenReadCompletedEventHandler {
    struct OpenReadCompletedEventHandler__Class* klass;
    MonitorData* monitor;
    struct OpenReadCompletedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OpenReadCompletedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_OpenReadCompletedEventHandler_FWDDECL
#include <Modloader/app/structs/OpenReadCompletedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_OpenReadCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenReadCompletedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_OpenReadCompletedEventHandler_FWDDECL)
#include <Modloader/app/structs/OpenReadCompletedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenReadCompletedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
