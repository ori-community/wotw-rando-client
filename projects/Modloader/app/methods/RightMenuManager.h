#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RightMenuManager {
    IL2CPP_REGISTER_METHOD(0x00910BE0, void, OnEnable, (app::RightMenuManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00911100, void, OnDisable, (app::RightMenuManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00911620, void, OnButtonAPressed, (app::RightMenuManager * this_ptr, app::UIContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04728378, RightMenuManager_OnButtonAPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00911640, void, OnButtonBPressed, (app::RightMenuManager * this_ptr, app::UIContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0474B698, RightMenuManager_OnButtonBPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonCPressed, (app::RightMenuManager * this_ptr, app::UIContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04765598, RightMenuManager_OnButtonCPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00911660, void, OnButtonDPressed, (app::RightMenuManager * this_ptr, app::UIContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04779E48, RightMenuManager_OnButtonDPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00911770, void, ctor, (app::RightMenuManager * this_ptr))
} // namespace app::classes::RightMenuManager
