#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::XboxLiveIdentityUI {
    IL2CPP_REGISTER_METHOD(0x00594530, bool, get_IsGrdk, (app::XboxLiveIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005945F0, void, Awake, (app::XboxLiveIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005947B0, void, OnDestroy, (app::XboxLiveIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00594970, void, OnEnable, (app::XboxLiveIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00594FF0, void, OnUserChanged, (app::XboxLiveIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B418, XboxLiveIdentityUI_OnUserChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005952C0, void, SetupFromLiveAccount, (app::XboxLiveIdentityUI * this_ptr, app::IPlatformUser* user))
    IL2CPP_REGISTER_METHOD(0x00595950, void, Update, (app::XboxLiveIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00596170, void, SignOutFlow, (app::XboxLiveIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsXbox, (app::XboxLiveIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::XboxLiveIdentityUI * this_ptr))
} // namespace app::classes::XboxLiveIdentityUI
