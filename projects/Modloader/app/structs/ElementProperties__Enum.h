#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElementProperties__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElementProperties__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElementProperties__Enum_DEFINED)
#define IL2CPP_STRUCT_ElementProperties__Enum_DEFINED
enum class ElementProperties__Enum : uint32_t {
    DEFAULT = 0x00000000,
    URI_PARENT = 0x00000001,
    BOOL_PARENT = 0x00000002,
    NAME_PARENT = 0x00000004,
    EMPTY = 0x00000008,
    NO_ENTITIES = 0x00000010,
    HEAD = 0x00000020,
    BLOCK_WS = 0x00000040,
    HAS_NS = 0x00000080,
};
#endif
#if !defined(IL2CPP_STRUCT_ElementProperties__Enum_FWDDECL)
#define IL2CPP_STRUCT_ElementProperties__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ElementProperties__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElementProperties__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ElementProperties__Enum_FWDDECL)
#include <Modloader/app/structs/ElementProperties__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElementProperties__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
