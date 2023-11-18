#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceSpectateState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceSpectateState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSpectateState__Fields_DEFINED)
#include <Modloader/app/structs/RaceBaseState__Fields.h>
#include <Modloader/app/structs/RenderScope__Enum.h>
#if defined(IL2CPP_STRUCT_RaceBaseState__Fields_DEFINED) && defined(IL2CPP_STRUCT_RenderScope__Enum_DEFINED)
#define IL2CPP_STRUCT_RaceSpectateState__Fields_DEFINED
struct Transform;
struct RaceSpectateState__Fields {
    struct RaceBaseState__Fields _;
    struct Transform* m_spectateTarget;
    int32_t m_ghostIndex;
    int32_t m_topGhostIndex;
    float m_trantisioningOutTime;
    bool m_updateSpectatorPosition;
    RenderScope__Enum m_previousBlurValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceSpectateState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceSpectateState__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RaceSpectateState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSpectateState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceSpectateState__Fields_FWDDECL)
#include <Modloader/app/structs/RaceSpectateState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceSpectateState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
