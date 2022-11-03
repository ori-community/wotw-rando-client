#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WeaponmasterScreen {
    IL2CPP_REGISTER_METHOD(0x00418200, app::ShopkeeperItem__Array*, get_Items, (app::WeaponmasterScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005729D0, app::WeaponmasterScreen*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00572A50, void, set_Instance, (app::WeaponmasterScreen * value))
    IL2CPP_REGISTER_METHOD(0x00572AE0, app::ShopkeeperScreen*, get_ShopInstance, (app::WeaponmasterScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00572AF0, void, set_ShopInstance, (app::WeaponmasterScreen * this_ptr, app::ShopkeeperScreen* value))
    IL2CPP_REGISTER_METHOD(0x00572C30, app::Event_1*, get_PurchaseBeginSound, (app::WeaponmasterScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00572C50, app::Event_1*, get_PurchaseCompleteSound, (app::WeaponmasterScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00572C70, app::RTPC*, get_PurchaseRTPC, (app::WeaponmasterScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00572C90, void, Init, (app::WeaponmasterScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00573000, float, GetAllUpgradesProgress, (app::WeaponmasterScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418B30, void, ctor, (app::WeaponmasterScreen * this_ptr))
} // namespace app::classes::WeaponmasterScreen
