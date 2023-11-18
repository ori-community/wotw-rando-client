#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReferenceLoopHandling__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReferenceLoopHandling__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferenceLoopHandling__Enum_DEFINED)
#define IL2CPP_STRUCT_ReferenceLoopHandling__Enum_DEFINED
enum class ReferenceLoopHandling__Enum : int32_t {
    Error = 0x00000000,
    Ignore = 0x00000001,
    Serialize = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_ReferenceLoopHandling__Enum_FWDDECL)
#define IL2CPP_STRUCT_ReferenceLoopHandling__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ReferenceLoopHandling__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferenceLoopHandling__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ReferenceLoopHandling__Enum_FWDDECL)
#include <Modloader/app/structs/ReferenceLoopHandling__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReferenceLoopHandling__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
