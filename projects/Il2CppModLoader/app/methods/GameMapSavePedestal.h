#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GameMapSavePedestal {
    IL2CPP_REGISTER_METHOD(0x0069FDA0, bool, get_IsTeleporterActive, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069FE80, void, set_IsTeleporterActive, (app::GameMapSavePedestal * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0069FFA0, void, ctor, (app::GameMapSavePedestal * this_ptr, app::SceneMetaData_SceneSavePedestal* save_pedestal, app::SceneMetaData* scene_meta_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (app::GameMapSavePedestal * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x006A00F0, app::IUberState__Array*, get_AffectingUberStates, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A0170, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A02C0, void, Show, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A03F0, void, CreateTeleporterIcon, (app::GameMapSavePedestal * this_ptr, app::AreaMapUI* area_map))
    IL2CPP_REGISTER_METHOD(0x006A0840, void, Update, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A0A70, app::Vector2, get_AreaMapIconPosition, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A0B80, void, set_AreaMapIconPosition, (app::GameMapSavePedestal * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x006A0CA0, app::Vector2, get_WorldProjectedPositon, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A0DB0, app::RuntimeGameWorldArea*, get_Area, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A0E80, void, Hide, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A0F80, void, Highlight, (app::GameMapSavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A1070, void, Dehighlight, (app::GameMapSavePedestal * this_ptr))
} // namespace app::classes::GameMapSavePedestal
