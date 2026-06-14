#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectStorage_Families__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectStorage_Families__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectStorage_Families__Enum_DEFINED)
#define IL2CPP_STRUCT_ObjectStorage_Families__Enum_DEFINED
enum class ObjectStorage_Families__Enum : int32_t {
    DATETIME = 0x00000000,
    NUMBER = 0x00000001,
    STRING = 0x00000002,
    BOOLEAN = 0x00000003,
    ARRAY = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectStorage_Families__Enum_FWDDECL)
#define IL2CPP_STRUCT_ObjectStorage_Families__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ObjectStorage_Families__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectStorage_Families__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ObjectStorage_Families__Enum_FWDDECL)
#include <Modloader/app/structs/ObjectStorage_Families__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectStorage_Families__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
