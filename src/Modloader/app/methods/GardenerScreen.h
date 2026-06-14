#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GardenerScreen.h>
#include <Modloader/app/structs/NpcProjectItem.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/ShopkeeperItem__Array.h>
#include <Modloader/app/structs/ShopkeeperScreen.h>

namespace app::classes::GardenerScreen {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418200, app::ShopkeeperItem__Array*, get_Items, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418210, app::GardenerScreen*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x00418290, void, set_Instance, app::GardenerScreen* value)
    IL2CPP_REGISTER_METHOD(0x00418320, app::ShopkeeperScreen*, get_ShopInstance, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418330, void, set_ShopInstance, app::GardenerScreen* this_ptr, app::ShopkeeperScreen* value)
    IL2CPP_REGISTER_METHOD(0x00418470, app::Event_1*, get_PurchaseBeginSound, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418490, app::Event_1*, get_PurchaseCompleteSound, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004184B0, app::RTPC*, get_PurchaseRTPC, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004184D0, app::NpcProjectItem*, get_CurrentProject, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004185B0, void, Init, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418920, float, GetAllProjectsProgress, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418A60, void, CompletePurchase, app::GardenerScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418B30, void, ctor, app::GardenerScreen* this_ptr)
} // namespace app::classes::GardenerScreen
