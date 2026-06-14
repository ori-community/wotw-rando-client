#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapSavePedestals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapSavePedestals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapSavePedestals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_GameMapSavePedestals__Fields_DEFINED
struct SoundProvider;
struct GameMapSavePedestals__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundProvider* SelectTeleporterSound;
    struct SoundProvider* SwitchTeleporterSelectionSound;
    struct SoundProvider* StartTeleportingSound;
    struct SoundProvider* ReachDestinationTeleporterSound;
    struct SoundProvider* OpenWindowSound;
    struct SoundProvider* CloseWindowSound;
    int32_t OriginIndex;
    int32_t SelectedIndex;
    bool m_released;
    struct Vector2 m_previousScrollPosition;
    float m_flyBackTime;
    struct Vector2 m_clickedPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapSavePedestals__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameMapSavePedestals__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_GameMapSavePedestals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapSavePedestals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameMapSavePedestals__Fields_FWDDECL)
#include <Modloader/app/structs/GameMapSavePedestals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapSavePedestals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
