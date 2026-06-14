#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInputRebinding_PlayerInputKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInputRebinding_PlayerInputKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInputRebinding_PlayerInputKey_DEFINED)
#define IL2CPP_STRUCT_PlayerInputRebinding_PlayerInputKey_DEFINED
struct String;
struct KeyCode__Enum__Array;
struct PlayerInputRebinding_PlayerInputKey {
    struct String* Input;
    struct KeyCode__Enum__Array* Keys;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerInputRebinding_PlayerInputKey_FWDDECL)
#define IL2CPP_STRUCT_PlayerInputRebinding_PlayerInputKey_FWDDECL
#include <Modloader/app/structs/KeyCode__Enum__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerInputRebinding_PlayerInputKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInputRebinding_PlayerInputKey_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInputRebinding_PlayerInputKey_FWDDECL)
#include <Modloader/app/structs/PlayerInputRebinding_PlayerInputKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInputRebinding_PlayerInputKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
