#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyChangingEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyChangingEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChangingEventHandler_DEFINED)
#include <Modloader/app/structs/PropertyChangingEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyChangingEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyChangingEventHandler_DEFINED
struct PropertyChangingEventHandler__Class;
struct PropertyChangingEventHandler {
    struct PropertyChangingEventHandler__Class* klass;
    MonitorData* monitor;
    struct PropertyChangingEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyChangingEventHandler_FWDDECL)
#define IL2CPP_STRUCT_PropertyChangingEventHandler_FWDDECL
#include <Modloader/app/structs/PropertyChangingEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyChangingEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChangingEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_PropertyChangingEventHandler_FWDDECL)
#include <Modloader/app/structs/PropertyChangingEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyChangingEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
