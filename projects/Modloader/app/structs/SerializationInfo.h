#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationInfo_DEFINED)
#include <Modloader/app/structs/SerializationInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationInfo_DEFINED
struct SerializationInfo__Class;
struct SerializationInfo {
    struct SerializationInfo__Class* klass;
    MonitorData* monitor;
    struct SerializationInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationInfo_FWDDECL)
#define IL2CPP_STRUCT_SerializationInfo_FWDDECL
#include <Modloader/app/structs/SerializationInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationInfo_DEFINED) && !defined(IL2CPP_STRUCT_SerializationInfo_FWDDECL)
#include <Modloader/app/structs/SerializationInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
