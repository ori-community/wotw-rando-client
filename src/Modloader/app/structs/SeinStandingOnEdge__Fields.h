#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinStandingOnEdge__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinStandingOnEdge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStandingOnEdge__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinStandingOnEdge__Fields_DEFINED
struct MoonAnimation;
struct SeinStandingOnEdge__Fields {
    struct CharacterState__Fields _;
    float Distance;
    struct MoonAnimation* FacingEdge;
    struct MoonAnimation* FacingEdgeBackwards;
    bool StandingOnEdgeBackwards;
    bool StandingOnEdgeForwards;
    bool m_lastFrameState;
    int32_t m_onEdgeBackReqId;
    int32_t m_onEdgeForwReqId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinStandingOnEdge__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinStandingOnEdge__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinStandingOnEdge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStandingOnEdge__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinStandingOnEdge__Fields_FWDDECL)
#include <Modloader/app/structs/SeinStandingOnEdge__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinStandingOnEdge__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
