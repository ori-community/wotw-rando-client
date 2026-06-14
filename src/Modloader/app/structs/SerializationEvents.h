#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEvents_DEFINED)
#include <Modloader/app/structs/SerializationEvents__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationEvents_DEFINED
struct SerializationEvents__Class;
struct SerializationEvents {
    struct SerializationEvents__Class* klass;
    MonitorData* monitor;
    struct SerializationEvents__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationEvents_FWDDECL)
#define IL2CPP_STRUCT_SerializationEvents_FWDDECL
#include <Modloader/app/structs/SerializationEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEvents_DEFINED) && !defined(IL2CPP_STRUCT_SerializationEvents_FWDDECL)
#include <Modloader/app/structs/SerializationEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
