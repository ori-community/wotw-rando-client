#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateDescriptor__Fields_DEFINED)
#include <Modloader/app/structs/ObjectUberState__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ObjectUberState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateDescriptor__Fields_DEFINED
struct PlayerUberState;
struct GameWorld;
struct UberStateGroup;
struct UberID;
struct NavigableOnGUI;
struct PlayerUberStateDescriptor__Fields {
    struct ObjectUberState__Fields _;
    struct PlayerUberState* EditorValue;
    struct PlayerUberState* m_state;
    struct GameWorld* GameWorld;
    struct UberStateGroup* Group;
    struct UberID* m_cachedGroupID;
    bool m_isGroupIDCached;
    int32_t m_cachedValueStoreID;
    bool m_isActive;
    struct Rect m_scrollViewRect;
    struct Rect m_previousRect;
    struct Rect m_lastRect;
    struct NavigableOnGUI* m_navigatableGui;
    struct Vector2 m_scroll;
    bool inputDetected;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/GameWorld.h>
#include <Modloader/app/structs/NavigableOnGUI.h>
#include <Modloader/app/structs/PlayerUberState.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/UberStateGroup.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
