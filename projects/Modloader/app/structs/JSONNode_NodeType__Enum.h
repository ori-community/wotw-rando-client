#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JSONNode_NodeType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JSONNode_NodeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONNode_NodeType__Enum_DEFINED)
#define IL2CPP_STRUCT_JSONNode_NodeType__Enum_DEFINED
enum class JSONNode_NodeType__Enum : int32_t {
    Invalid = 0x00000000,
    String = 0x00000001,
    Number = 0x00000002,
    Object = 0x00000003,
    Array = 0x00000004,
    Bool = 0x00000005,
    Null = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_JSONNode_NodeType__Enum_FWDDECL)
#define IL2CPP_STRUCT_JSONNode_NodeType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_JSONNode_NodeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONNode_NodeType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_JSONNode_NodeType__Enum_FWDDECL)
#include <Modloader/app/structs/JSONNode_NodeType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JSONNode_NodeType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
