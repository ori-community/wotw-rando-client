#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationCallback_DEFINED)
#include <Modloader/app/structs/SerializationCallback__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationCallback_DEFINED
struct SerializationCallback__Class;
struct SerializationCallback {
    struct SerializationCallback__Class* klass;
    MonitorData* monitor;
    struct SerializationCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationCallback_FWDDECL)
#define IL2CPP_STRUCT_SerializationCallback_FWDDECL
#include <Modloader/app/structs/SerializationCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationCallback_DEFINED) && !defined(IL2CPP_STRUCT_SerializationCallback_FWDDECL)
#include <Modloader/app/structs/SerializationCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
