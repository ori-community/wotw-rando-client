#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_CollisionFlags__Enum_DEFINED
enum class CollisionFlags__Enum : int32_t {
    None = 0x00000000,
    Sides = 0x00000001,
    Above = 0x00000002,
    Below = 0x00000004,
    CollidedSides = 0x00000001,
    CollidedAbove = 0x00000002,
    CollidedBelow = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_CollisionFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_CollisionFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CollisionFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CollisionFlags__Enum_FWDDECL)
#include <Modloader/app/structs/CollisionFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
