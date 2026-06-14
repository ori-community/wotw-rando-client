#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitFlash3D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitFlash3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitFlash3D__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HitFlash3D__Fields_DEFINED
struct GameObject;
struct LegacyTimelineSequence;
struct List_1_HitFlash3D_Flash_;
struct HitFlash3D__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* FlashAnimationObj;
    bool PlayAutomatically;
    struct LegacyTimelineSequence* m_flashSequence;
    struct List_1_HitFlash3D_Flash_* m_flashEntries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitFlash3D__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitFlash3D__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/List_1_HitFlash3D_Flash_.h>
#endif
#undef IL2CPP_STRUCT_HitFlash3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitFlash3D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitFlash3D__Fields_FWDDECL)
#include <Modloader/app/structs/HitFlash3D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitFlash3D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
