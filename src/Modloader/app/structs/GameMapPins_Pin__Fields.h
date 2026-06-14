#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapPins_Pin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapPins_Pin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapPins_Pin__Fields_DEFINED)
#include <Modloader/app/structs/GameMapPins_PinColour__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_GameMapPins_PinColour__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_GameMapPins_Pin__Fields_DEFINED
struct __declspec(align(8)) GameMapPins_Pin__Fields {
    GameMapPins_PinColour__Enum Colour;

    struct Vector2 Position;
    bool IsActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapPins_Pin__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameMapPins_Pin__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GameMapPins_Pin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapPins_Pin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameMapPins_Pin__Fields_FWDDECL)
#include <Modloader/app/structs/GameMapPins_Pin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapPins_Pin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
