#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Json_Serializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Json_Serializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Json_Serializer_DEFINED)
#include <Modloader/app/structs/Json_Serializer__Fields.h>
#if defined(IL2CPP_STRUCT_Json_Serializer__Fields_DEFINED)
#define IL2CPP_STRUCT_Json_Serializer_DEFINED
struct Json_Serializer__Class;
struct Json_Serializer {
    struct Json_Serializer__Class* klass;
    MonitorData* monitor;
    struct Json_Serializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Json_Serializer_FWDDECL)
#define IL2CPP_STRUCT_Json_Serializer_FWDDECL
#include <Modloader/app/structs/Json_Serializer__Class.h>
#endif
#undef IL2CPP_STRUCT_Json_Serializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Json_Serializer_DEFINED) && !defined(IL2CPP_STRUCT_Json_Serializer_FWDDECL)
#include <Modloader/app/structs/Json_Serializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Json_Serializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
