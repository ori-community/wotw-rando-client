#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializableAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializableAttribute_DEFINED)
#define IL2CPP_STRUCT_SerializableAttribute_DEFINED
struct SerializableAttribute__Class;
struct SerializableAttribute {
    struct SerializableAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializableAttribute_FWDDECL)
#define IL2CPP_STRUCT_SerializableAttribute_FWDDECL
#include <Modloader/app/structs/SerializableAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializableAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SerializableAttribute_FWDDECL)
#include <Modloader/app/structs/SerializableAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializableAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
