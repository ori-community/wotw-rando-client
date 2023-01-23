#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateAreaMapInformation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateAreaMapInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateAreaMapInformation__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateAreaMapInformation__Fields_DEFINED
struct Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_;
struct List_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_;
struct PlayerUberStateAreaMapInformation_MapTrailEntryPool;
struct Action;
struct PlayerUberStateDescriptor;
struct __declspec(align(8)) PlayerUberStateAreaMapInformation__Fields {
    struct Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_* m_areaFaceData;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_* m_trail;
    struct PlayerUberStateAreaMapInformation_MapTrailEntryPool* m_mapTrailEntryPool;
    struct Action* m_setDirtyCallback;
    struct PlayerUberStateDescriptor* m_descriptor;
    bool m_pinFoldout;
    struct Rect m_tempRect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateAreaMapInformation__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateAreaMapInformation__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_.h>
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation_MapTrailEntryPool.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateAreaMapInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateAreaMapInformation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateAreaMapInformation__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
