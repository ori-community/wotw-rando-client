#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LeftMenuManager.h>
#include <Modloader/app/structs/UIContext.h>

namespace app::classes::LeftMenuManager {
    IL2CPP_REGISTER_METHOD(0x015C7CD0, void, OnEnable, (app::LeftMenuManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C81F0, void, OnDisable, (app::LeftMenuManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00911620, void, OnButtonAPressed, (app::LeftMenuManager * this_ptr, app::UIContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0470B480, LeftMenuManager_OnButtonAPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonBPressed, (app::LeftMenuManager * this_ptr, app::UIContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04759570, LeftMenuManager_OnButtonBPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonCPressed, (app::LeftMenuManager * this_ptr, app::UIContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04780BD8, LeftMenuManager_OnButtonCPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonDPressed, (app::LeftMenuManager * this_ptr, app::UIContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04753E70, LeftMenuManager_OnButtonDPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C8710, void, ctor, (app::LeftMenuManager * this_ptr))
} // namespace app::classes::LeftMenuManager
