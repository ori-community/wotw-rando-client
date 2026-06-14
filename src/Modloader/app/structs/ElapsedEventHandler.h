#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElapsedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElapsedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElapsedEventHandler_DEFINED)
#include <Modloader/app/structs/ElapsedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_ElapsedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_ElapsedEventHandler_DEFINED
struct ElapsedEventHandler__Class;
struct ElapsedEventHandler {
    struct ElapsedEventHandler__Class* klass;
    MonitorData* monitor;
    struct ElapsedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ElapsedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_ElapsedEventHandler_FWDDECL
#include <Modloader/app/structs/ElapsedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ElapsedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElapsedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_ElapsedEventHandler_FWDDECL)
#include <Modloader/app/structs/ElapsedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElapsedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
