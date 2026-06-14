#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartFlip__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartFlip__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartFlip__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_CartFlip__Fields_DEFINED
struct PlatformBehaviour;
struct CartFlipSpaceCheck;
struct LegacyTimelineSequence;
struct MoonTimeline;
struct CartAnimation;
struct Transform;
struct CartFlip__Fields {
    struct CharacterState__Fields _;
    struct PlatformBehaviour* PlatformBehaviour;
    struct CartFlipSpaceCheck* FlipSpaceCheck;
    struct LegacyTimelineSequence* FlipSequence;
    struct MoonTimeline* FlipSequenceNew;
    struct CartAnimation* CartAnimation;
    bool m_isFlippedVerticaly;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartFlip__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartFlip__Fields_FWDDECL
#include <Modloader/app/structs/CartAnimation.h>
#include <Modloader/app/structs/CartFlipSpaceCheck.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CartFlip__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartFlip__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartFlip__Fields_FWDDECL)
#include <Modloader/app/structs/CartFlip__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartFlip__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
