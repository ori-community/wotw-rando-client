#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListChangedType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListChangedType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListChangedType__Enum_DEFINED)
#define IL2CPP_STRUCT_ListChangedType__Enum_DEFINED
enum class ListChangedType__Enum : int32_t {
    Reset = 0x00000000,
    ItemAdded = 0x00000001,
    ItemDeleted = 0x00000002,
    ItemMoved = 0x00000003,
    ItemChanged = 0x00000004,
    PropertyDescriptorAdded = 0x00000005,
    PropertyDescriptorDeleted = 0x00000006,
    PropertyDescriptorChanged = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_ListChangedType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ListChangedType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ListChangedType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListChangedType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ListChangedType__Enum_FWDDECL)
#include <Modloader/app/structs/ListChangedType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListChangedType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
