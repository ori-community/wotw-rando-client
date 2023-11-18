#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationEntry__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationEntry__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEntry__Boxed_DEFINED)
#include <Modloader/app/structs/SerializationEntry.h>
#if defined(IL2CPP_STRUCT_SerializationEntry_DEFINED)
#define IL2CPP_STRUCT_SerializationEntry__Boxed_DEFINED
struct SerializationEntry__Class;
struct SerializationEntry__Boxed {
    struct SerializationEntry__Class* klass;
    MonitorData* monitor;
    struct SerializationEntry fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationEntry__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SerializationEntry__Boxed_FWDDECL
#include <Modloader/app/structs/SerializationEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationEntry__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEntry__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SerializationEntry__Boxed_FWDDECL)
#include <Modloader/app/structs/SerializationEntry__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationEntry__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
