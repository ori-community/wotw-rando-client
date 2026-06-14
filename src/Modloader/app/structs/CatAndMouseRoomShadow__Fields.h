#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatAndMouseRoomShadow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatAndMouseRoomShadow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomShadow__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_CatAndMouseRoomShadow__Fields_DEFINED
struct Transform;
struct LegacyTransparencyAnimator;
struct ScaleAnimator;
struct CatAndMouseRoomTimerController;
struct CatAndMouseRoomShadow__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Zone;
    struct Rect m_bounds;
    struct LegacyTransparencyAnimator* TransparencyAnimator;
    struct ScaleAnimator* ScaleAnimator;
    struct CatAndMouseRoomTimerController* Timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomShadow__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatAndMouseRoomShadow__Fields_FWDDECL
#include <Modloader/app/structs/CatAndMouseRoomTimerController.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/ScaleAnimator.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CatAndMouseRoomShadow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomShadow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatAndMouseRoomShadow__Fields_FWDDECL)
#include <Modloader/app/structs/CatAndMouseRoomShadow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatAndMouseRoomShadow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
