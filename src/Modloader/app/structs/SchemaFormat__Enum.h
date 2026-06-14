#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaFormat__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaFormat__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_SchemaFormat__Enum_DEFINED
enum class SchemaFormat__Enum : int32_t {
    Public = 0x00000001,
    Remoting = 0x00000002,
    WebService = 0x00000003,
    RemotingSkipSchema = 0x00000004,
    WebServiceSkipSchema = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_SchemaFormat__Enum_FWDDECL)
#define IL2CPP_STRUCT_SchemaFormat__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SchemaFormat__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaFormat__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SchemaFormat__Enum_FWDDECL)
#include <Modloader/app/structs/SchemaFormat__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaFormat__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
