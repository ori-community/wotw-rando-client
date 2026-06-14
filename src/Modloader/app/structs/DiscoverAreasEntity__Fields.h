#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DiscoverAreasEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DiscoverAreasEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiscoverAreasEntity__Fields_DEFINED)
#include <Modloader/app/structs/DiscoverAreasEntity_State__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_DiscoverAreasEntity_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_DiscoverAreasEntity__Fields_DEFINED
struct SoundProvider;
struct Transform;
struct AreaMapCanvas;
struct SpellUIExperience;
struct DiscoverAreasEntity__Fields {
    struct TimelineEntity__Fields _;
    struct SoundProvider* RevealSound;
    struct Transform* RevealPosition;
    DiscoverAreasEntity_State__Enum m_currentState;

    bool m_canFinish;
    float m_timer;
    struct AreaMapCanvas* m_canvas;
    float WaitTime;
    float MoveTime;
    float FadeDuration;
    float FreeInputTime;
    struct Vector2 m_playerMapPoition;
    struct Vector2 m_targetMapPosition;
    bool Pause;
    bool UseExperience;
    float m_initialZoom;
    float m_targetZoom;
    struct SpellUIExperience* m_experience;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DiscoverAreasEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_DiscoverAreasEntity__Fields_FWDDECL
#include <Modloader/app/structs/AreaMapCanvas.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SpellUIExperience.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DiscoverAreasEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiscoverAreasEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DiscoverAreasEntity__Fields_FWDDECL)
#include <Modloader/app/structs/DiscoverAreasEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DiscoverAreasEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
