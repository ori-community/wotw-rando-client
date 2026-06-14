#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationException_DEFINED)
#include <Modloader/app/structs/SerializationException__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationException__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationException_DEFINED
struct SerializationException__Class;
struct SerializationException {
    struct SerializationException__Class* klass;
    MonitorData* monitor;
    struct SerializationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationException_FWDDECL)
#define IL2CPP_STRUCT_SerializationException_FWDDECL
#include <Modloader/app/structs/SerializationException__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationException_DEFINED) && !defined(IL2CPP_STRUCT_SerializationException_FWDDECL)
#include <Modloader/app/structs/SerializationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
