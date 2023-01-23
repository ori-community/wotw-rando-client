#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLookUp__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLookUp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLookUp__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLookUp__Fields_DEFINED
struct MoonAnimation;
struct SeinLookUp__Fields {
    struct CharacterState__Fields _;
    float Drag;
    float LookDelay;
    struct MoonAnimation* LookUp;
    float LookUpDuration;
    float LookUpHeight;
    float m_height;
    bool m_isLookingDown;
    bool m_isLookingUp;
    float m_lookDelay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLookUp__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinLookUp__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinLookUp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLookUp__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinLookUp__Fields_FWDDECL)
#include <Modloader/app/structs/SeinLookUp__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLookUp__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
