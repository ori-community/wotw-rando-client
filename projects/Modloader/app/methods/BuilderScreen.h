#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BuilderScreen.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/NpcProjectItem.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/ShopkeeperItem__Array.h>
#include <Modloader/app/structs/ShopkeeperScreen.h>

namespace app::classes::BuilderScreen {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NeedOreUI, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418200, app::ShopkeeperItem__Array*, get_Items, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081C600, app::BuilderScreen*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x0081C680, void, set_Instance, (app::BuilderScreen * value))
    IL2CPP_REGISTER_METHOD(0x0081C710, app::ShopkeeperScreen*, get_ShopInstance, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081C720, void, set_ShopInstance, (app::BuilderScreen * this_ptr, app::ShopkeeperScreen* value))
    IL2CPP_REGISTER_METHOD(0x0081C860, app::Event_1*, get_PurchaseBeginSound, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081C880, app::Event_1*, get_PurchaseCompleteSound, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081C8A0, app::RTPC*, get_PurchaseRTPC, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004184D0, app::NpcProjectItem*, get_CurrentProject, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081C8C0, void, Init, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418920, float, GetAllProjectsProgress, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081CC30, void, CompletePurchase, (app::BuilderScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418B30, void, ctor, (app::BuilderScreen * this_ptr))
} // namespace app::classes::BuilderScreen
