#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DestroyManager_CountAndCallback {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Count, (app::DestroyManager_CountAndCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Count, (app::DestroyManager_CountAndCallback * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Action *, get_Callback, (app::DestroyManager_CountAndCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Callback, (app::DestroyManager_CountAndCallback * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x00B8BE80, bool, get_IsDone, (app::DestroyManager_CountAndCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, Reset, (app::DestroyManager_CountAndCallback * this_ptr, int32_t count, app::Action * callback))
    IL2CPP_REGISTER_METHOD(0x00B8BE90, void, DecrementCount, (app::DestroyManager_CountAndCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8BEC0, void, FireCallback, (app::DestroyManager_CountAndCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DestroyManager_CountAndCallback * this_ptr))
}
