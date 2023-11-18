#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerStayInsideZoneTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerStayInsideZoneTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStayInsideZoneTrigger__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_PlayerStayInsideZoneTrigger__Fields_DEFINED
struct ActionMethod;
struct PlayerStayInsideZoneTrigger__Fields {
    struct MonoBehaviour__Fields _;
    bool m_wasInside;
    struct Rect m_bounds;
    bool m_hasPlayed;
    float m_time;
    struct ActionMethod* Action;
    float TimeToTake;
    struct Vector2 Size;
    struct Color EditorColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerStayInsideZoneTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerStayInsideZoneTrigger__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#endif
#undef IL2CPP_STRUCT_PlayerStayInsideZoneTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStayInsideZoneTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerStayInsideZoneTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
