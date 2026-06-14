#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingServices__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingServices__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RemotingServices__StaticFields_DEFINED
struct Hashtable;
struct BinaryFormatter;
struct String;
struct Object;
struct MethodInfo_1;
struct RemotingServices__StaticFields {
    struct Hashtable* uri_hash;
    struct BinaryFormatter* _serializationFormatter;
    struct BinaryFormatter* _deserializationFormatter;
    struct String* app_id;
    struct Object* app_id_lock;
    int32_t next_id;
    struct MethodInfo_1* FieldSetterMethod;
    struct MethodInfo_1* FieldGetterMethod;
};
#endif
#if !defined(IL2CPP_STRUCT_RemotingServices__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RemotingServices__StaticFields_FWDDECL
#include <Modloader/app/structs/BinaryFormatter.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RemotingServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingServices__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RemotingServices__StaticFields_FWDDECL)
#include <Modloader/app/structs/RemotingServices__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingServices__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
