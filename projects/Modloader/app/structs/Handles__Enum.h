#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Handles__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Handles__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Handles__Enum_DEFINED)
#define IL2CPP_STRUCT_Handles__Enum_DEFINED
enum class Handles__Enum : int32_t {
    STD_INPUT = -10,
    STD_OUTPUT = -11,
    STD_ERROR = -12,
};
#endif
#if !defined(IL2CPP_STRUCT_Handles__Enum_FWDDECL)
#define IL2CPP_STRUCT_Handles__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Handles__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Handles__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Handles__Enum_FWDDECL)
#include <Modloader/app/structs/Handles__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Handles__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
