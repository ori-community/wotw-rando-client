#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEventHandler_DEFINED)
#include <Modloader/app/structs/SerializationEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationEventHandler_DEFINED
struct SerializationEventHandler__Class;
struct SerializationEventHandler {
    struct SerializationEventHandler__Class* klass;
    MonitorData* monitor;
    struct SerializationEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationEventHandler_FWDDECL)
#define IL2CPP_STRUCT_SerializationEventHandler_FWDDECL
#include <Modloader/app/structs/SerializationEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_SerializationEventHandler_FWDDECL)
#include <Modloader/app/structs/SerializationEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
