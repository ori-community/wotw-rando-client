#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InsertionBehavior__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InsertionBehavior__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InsertionBehavior__Enum_DEFINED)
#define IL2CPP_STRUCT_InsertionBehavior__Enum_DEFINED
enum class InsertionBehavior__Enum : uint8_t {
    None = 0x00,
    OverwriteExisting = 0x01,
    ThrowOnExisting = 0x02,
};
#endif
#if !defined(IL2CPP_STRUCT_InsertionBehavior__Enum_FWDDECL)
#define IL2CPP_STRUCT_InsertionBehavior__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_InsertionBehavior__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InsertionBehavior__Enum_DEFINED) && !defined(IL2CPP_STRUCT_InsertionBehavior__Enum_FWDDECL)
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
