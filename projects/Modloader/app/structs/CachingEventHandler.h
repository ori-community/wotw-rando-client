#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CachingEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CachingEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachingEventHandler_DEFINED)
#include <Modloader/app/structs/CachingEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_CachingEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_CachingEventHandler_DEFINED
struct CachingEventHandler__Class;
struct CachingEventHandler {
    struct CachingEventHandler__Class* klass;
    MonitorData* monitor;
    struct CachingEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CachingEventHandler_FWDDECL)
#define IL2CPP_STRUCT_CachingEventHandler_FWDDECL
#include <Modloader/app/structs/CachingEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_CachingEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachingEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_CachingEventHandler_FWDDECL)
#include <Modloader/app/structs/CachingEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CachingEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
