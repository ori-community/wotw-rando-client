#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeserializationEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeserializationEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeserializationEventHandler_DEFINED)
#include <Modloader/app/structs/DeserializationEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DeserializationEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DeserializationEventHandler_DEFINED
struct DeserializationEventHandler__Class;
struct DeserializationEventHandler {
    struct DeserializationEventHandler__Class* klass;
    MonitorData* monitor;
    struct DeserializationEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeserializationEventHandler_FWDDECL)
#define IL2CPP_STRUCT_DeserializationEventHandler_FWDDECL
#include <Modloader/app/structs/DeserializationEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DeserializationEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeserializationEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_DeserializationEventHandler_FWDDECL)
#include <Modloader/app/structs/DeserializationEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeserializationEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
