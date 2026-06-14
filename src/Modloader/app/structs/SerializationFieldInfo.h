#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationFieldInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationFieldInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationFieldInfo_DEFINED)
#include <Modloader/app/structs/SerializationFieldInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationFieldInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationFieldInfo_DEFINED
struct SerializationFieldInfo__Class;
struct SerializationFieldInfo {
    struct SerializationFieldInfo__Class* klass;
    MonitorData* monitor;
    struct SerializationFieldInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationFieldInfo_FWDDECL)
#define IL2CPP_STRUCT_SerializationFieldInfo_FWDDECL
#include <Modloader/app/structs/SerializationFieldInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationFieldInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationFieldInfo_DEFINED) && !defined(IL2CPP_STRUCT_SerializationFieldInfo_FWDDECL)
#include <Modloader/app/structs/SerializationFieldInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationFieldInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
