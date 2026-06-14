#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PInfo__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PInfo__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PInfo__Enum_DEFINED)
#define IL2CPP_STRUCT_PInfo__Enum_DEFINED
enum class PInfo__Enum : int32_t {
    Attributes = 0x00000001,
    GetMethod = 0x00000002,
    SetMethod = 0x00000004,
    ReflectedType = 0x00000008,
    DeclaringType = 0x00000010,
    Name = 0x00000020,
};
#endif
#if !defined(IL2CPP_STRUCT_PInfo__Enum_FWDDECL)
#define IL2CPP_STRUCT_PInfo__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PInfo__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PInfo__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PInfo__Enum_FWDDECL)
#include <Modloader/app/structs/PInfo__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PInfo__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
