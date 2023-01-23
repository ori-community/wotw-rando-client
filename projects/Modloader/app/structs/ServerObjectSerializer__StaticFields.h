#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerObjectSerializer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerObjectSerializer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectSerializer__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ServerObjectSerializer__StaticFields_DEFINED
struct Dictionary_2_System_Type_System_Type_;
struct fsSerializer;
struct HashSet_1_System_String_;
struct ServerObjectSerializer__StaticFields {
    struct Dictionary_2_System_Type_System_Type_* m_supportTypes;
    struct fsSerializer* m_serializer;
    struct HashSet_1_System_String_* m_whiteListHash;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerObjectSerializer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ServerObjectSerializer__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Type_.h>
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/fsSerializer.h>
#endif
#undef IL2CPP_STRUCT_ServerObjectSerializer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectSerializer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ServerObjectSerializer__StaticFields_FWDDECL)
#include <Modloader/app/structs/ServerObjectSerializer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerObjectSerializer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
