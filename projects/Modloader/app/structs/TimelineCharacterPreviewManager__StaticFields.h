#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineCharacterPreviewManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineCharacterPreviewManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineCharacterPreviewManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TimelineCharacterPreviewManager__StaticFields_DEFINED
struct TimelineCharacterPreviewManager_CharacterPreviewInstance;
struct GhostPlayer;
struct SeinController3D;
struct TimelineCharacterPreviewManager__StaticFields {
    struct TimelineCharacterPreviewManager_CharacterPreviewInstance* m_playerOriInstance;
    struct TimelineCharacterPreviewManager_CharacterPreviewInstance* m_playerKuInstance;
    struct GhostPlayer* m_ghostInstance;
    struct SeinController3D* m_previewSeinController3D;
};
#endif
#if !defined(IL2CPP_STRUCT_TimelineCharacterPreviewManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TimelineCharacterPreviewManager__StaticFields_FWDDECL
#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/SeinController3D.h>
#include <Modloader/app/structs/TimelineCharacterPreviewManager_CharacterPreviewInstance.h>
#endif
#undef IL2CPP_STRUCT_TimelineCharacterPreviewManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineCharacterPreviewManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineCharacterPreviewManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/TimelineCharacterPreviewManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineCharacterPreviewManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
