#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FindDirectionResult__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FindDirectionResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FindDirectionResult__Enum_DEFINED)
#define IL2CPP_STRUCT_FindDirectionResult__Enum_DEFINED
enum class FindDirectionResult__Enum : int32_t {
    Within = 0x00000000,
    Leftcollinear = 0x00000001,
    Rightcollinear = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_FindDirectionResult__Enum_FWDDECL)
#define IL2CPP_STRUCT_FindDirectionResult__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FindDirectionResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FindDirectionResult__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FindDirectionResult__Enum_FWDDECL)
#include <Modloader/app/structs/FindDirectionResult__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FindDirectionResult__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
