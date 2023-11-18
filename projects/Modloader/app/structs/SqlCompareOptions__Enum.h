#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlCompareOptions__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlCompareOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlCompareOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_SqlCompareOptions__Enum_DEFINED
enum class SqlCompareOptions__Enum : int32_t {
    None = 0x00000000,
    IgnoreCase = 0x00000001,
    IgnoreNonSpace = 0x00000002,
    IgnoreKanaType = 0x00000008,
    IgnoreWidth = 0x00000010,
    BinarySort = 0x00008000,
    BinarySort2 = 0x00004000,
};
#endif
#if !defined(IL2CPP_STRUCT_SqlCompareOptions__Enum_FWDDECL)
#define IL2CPP_STRUCT_SqlCompareOptions__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlCompareOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlCompareOptions__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SqlCompareOptions__Enum_FWDDECL)
#include <Modloader/app/structs/SqlCompareOptions__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlCompareOptions__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
