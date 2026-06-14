#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonContractType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonContractType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContractType__Enum_DEFINED)
#define IL2CPP_STRUCT_JsonContractType__Enum_DEFINED
enum class JsonContractType__Enum : int32_t {
    None = 0x00000000,
    Object = 0x00000001,
    Array = 0x00000002,
    Primitive = 0x00000003,
    String = 0x00000004,
    Dictionary = 0x00000005,
    Dynamic = 0x00000006,
    Serializable = 0x00000007,
    Linq = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_JsonContractType__Enum_FWDDECL)
#define IL2CPP_STRUCT_JsonContractType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_JsonContractType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContractType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_JsonContractType__Enum_FWDDECL)
#include <Modloader/app/structs/JsonContractType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonContractType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
