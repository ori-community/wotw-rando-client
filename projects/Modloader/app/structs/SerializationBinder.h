#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationBinder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationBinder_DEFINED)
#define IL2CPP_STRUCT_SerializationBinder_DEFINED
struct SerializationBinder__Class;
struct SerializationBinder {
    struct SerializationBinder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializationBinder_FWDDECL)
#define IL2CPP_STRUCT_SerializationBinder_FWDDECL
#include <Modloader/app/structs/SerializationBinder__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationBinder_DEFINED) && !defined(IL2CPP_STRUCT_SerializationBinder_FWDDECL)
#include <Modloader/app/structs/SerializationBinder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationBinder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
