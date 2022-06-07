#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ReplaySetting {
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, ShowPositionOverride, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00901820, void, ApplyState, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00901920, void, RevertState, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00901A20, void, CacheInventoryAndDefaultEquipment, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009023D0, void, ApplyInventory, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009024E0, void, RevertInventory, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00902630, void, ApplyDefaultEquipment, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009026C0, void, RevertDefaultEquipment, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00902710, void, Apply, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00902A70, app::IEnumerator *, ApplyRoutine, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00902BC0, void, SetPosition, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00902D60, void, UnloadScene, (app::String * scene_name))
    IL2CPP_REGISTER_METHOD(0x00902E70, app::IEnumerator *, GoToSceneRoutine, (app::String * scene_name, app::SceneMetaData * meta_data, app::Vector3 position, app::Action * on_complete, bool exit))
    IL2CPP_REGISTER_METHOD(0x00903000, void, RevertToMenu, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00903010, void, RevertToGame, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00903110, void, ctor, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00903120, void, _Apply_b__33_0, (app::ReplaySetting * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754BB0, ReplaySetting__Apply_b__33_0__MethodInfo)
}
