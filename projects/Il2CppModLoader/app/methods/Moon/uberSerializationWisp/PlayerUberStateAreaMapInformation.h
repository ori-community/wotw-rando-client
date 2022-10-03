#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation {
    IL2CPP_REGISTER_METHOD(0x00F35560, int64_t, get_Size, (app::PlayerUberStateAreaMapInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F35710, void, Save, (app::PlayerUberStateAreaMapInformation * this_ptr, app::UberStateArchive* archive, app::PlayerUberStateAreaMapInformation* map_info))
    IL2CPP_REGISTER_METHOD(0x00F35A50, void, Load, (app::PlayerUberStateAreaMapInformation * this_ptr, app::UberStateArchive* archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x00F35DC0, void, ctor, (app::PlayerUberStateAreaMapInformation * this_ptr, app::PlayerUberStateDescriptor* desc, app::Action* dirty_call_back))
    IL2CPP_REGISTER_METHOD(0x00F363F0, void, InitializeMap, (app::PlayerUberStateAreaMapInformation * this_ptr, app::PlayerUberStateDescriptor* desc))
    IL2CPP_REGISTER_METHOD(0x00F36600, void, OnGui, (app::PlayerUberStateAreaMapInformation * this_ptr, app::NavigableOnGUI* gui))
    IL2CPP_REGISTER_METHOD(0x00F366D0, void, RunSetDirtyCallback, (app::PlayerUberStateAreaMapInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F36860, app::WorldMapAreaState__Enum, GetAreaState, (app::PlayerUberStateAreaMapInformation * this_ptr, app::GameWorldAreaID__Enum area_i_d, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00F369E0, void, SetAreaState, (app::PlayerUberStateAreaMapInformation * this_ptr, app::GameWorldAreaID__Enum area_i_d, int32_t index, app::WorldMapAreaState__Enum state, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00F36E40, app::Dictionary_2_System_Int32_WorldMapAreaState_*, GetAreaStates, (app::PlayerUberStateAreaMapInformation * this_ptr, app::GameWorldAreaID__Enum area_i_d))
    IL2CPP_REGISTER_METHOD(0x00F36EE0, void, AddTrailPoint, (app::PlayerUberStateAreaMapInformation * this_ptr, app::Vector2 point, int32_t time))
    IL2CPP_REGISTER_METHOD(0x00F371E0, bool, IsWithinMapTrailEntryBounds, (app::PlayerUberStateAreaMapInformation * this_ptr, app::PlayerUberStateAreaMapInformation_MapTrailEntry* entry, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00F37270, app::PlayerUberStateAreaMapInformation_MapTrailEntry*, GetTrailEntryContainingPoint, (app::PlayerUberStateAreaMapInformation * this_ptr, app::Vector2 point, int32_t* index))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_*, GetTrailPoints, (app::PlayerUberStateAreaMapInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F37410, void, Initialize, (app::PlayerUberStateAreaMapInformation * this_ptr, app::GameWorldArea* area))
    IL2CPP_REGISTER_METHOD(0x00F377D0, void, Reset, (app::PlayerUberStateAreaMapInformation * this_ptr, app::GameWorldArea* area))
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation
