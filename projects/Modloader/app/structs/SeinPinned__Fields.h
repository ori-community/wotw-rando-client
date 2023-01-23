#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPinned__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPinned__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPinned__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinPinned__Fields_DEFINED
struct MoonAnimation;
struct SeinPinned__Fields {
    struct CharacterState__Fields _;
    struct Vector3 PinnedPositionOffset;
    float RavageAnimationOffset;
    struct MoonAnimation* PinDown;
    struct MoonAnimation* PinRavage;
    bool m_wasRavage;
    float m_ravageTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPinned__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinPinned__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinPinned__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPinned__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinPinned__Fields_FWDDECL)
#include <Modloader/app/structs/SeinPinned__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPinned__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
