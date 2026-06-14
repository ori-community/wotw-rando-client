#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostFrame_FrameDataTypes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostFrame_FrameDataTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostFrame_FrameDataTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_GhostFrame_FrameDataTypes__Enum_DEFINED
enum class GhostFrame_FrameDataTypes__Enum : uint8_t {
    None = 0x00,
    Transform = 0x01,
    Animation = 0x02,
    StateMachine = 0x03,
    CharacterData = 0x04,
    CharacterAbilities = 0x05,
    CharacterStates = 0x06,
    GenericEvents = 0x07,
    RecordingMetaDataData = 0x08,
    PhysicaSystemManagerData = 0x09,
    ServerEvents = 0x0a,
    WorldEvents = 0x0b,
    TimelineEvents = 0x0c,
    Camera = 0x0d,
    UberState = 0x0e,
    SceneTracking = 0x0f,
    TimeTracking = 0x10,
    LineRenderer = 0x11,
    AnimationParameters = 0x12,
};
#endif
#if !defined(IL2CPP_STRUCT_GhostFrame_FrameDataTypes__Enum_FWDDECL)
#define IL2CPP_STRUCT_GhostFrame_FrameDataTypes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GhostFrame_FrameDataTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostFrame_FrameDataTypes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GhostFrame_FrameDataTypes__Enum_FWDDECL)
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
