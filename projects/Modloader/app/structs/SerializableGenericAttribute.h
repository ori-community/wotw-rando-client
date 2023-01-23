#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializableGenericAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializableGenericAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializableGenericAttribute_DEFINED)
#define IL2CPP_STRUCT_SerializableGenericAttribute_DEFINED
struct SerializableGenericAttribute__Class;
struct SerializableGenericAttribute {
    struct SerializableGenericAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializableGenericAttribute_FWDDECL)
#define IL2CPP_STRUCT_SerializableGenericAttribute_FWDDECL
#include <Modloader/app/structs/SerializableGenericAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializableGenericAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializableGenericAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SerializableGenericAttribute_FWDDECL)
#include <Modloader/app/structs/SerializableGenericAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializableGenericAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
