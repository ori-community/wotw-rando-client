#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyChangedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChangedEventHandler_DEFINED)
#include <Modloader/app/structs/PropertyChangedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyChangedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyChangedEventHandler_DEFINED
struct PropertyChangedEventHandler__Class;
struct PropertyChangedEventHandler {
    struct PropertyChangedEventHandler__Class* klass;
    MonitorData* monitor;
    struct PropertyChangedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyChangedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_PropertyChangedEventHandler_FWDDECL
#include <Modloader/app/structs/PropertyChangedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChangedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_PropertyChangedEventHandler_FWDDECL)
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
