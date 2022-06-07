#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DamageBasedSoundProvider_CallbackFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DamageBasedSoundProvider_CallbackFunction * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::DamageBasedSoundProvider_CallbackFunction * this_ptr, app::DamageBasedSoundProvider * provider))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::DamageBasedSoundProvider_CallbackFunction * this_ptr, app::DamageBasedSoundProvider * provider, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DamageBasedSoundProvider_CallbackFunction * this_ptr, app::IAsyncResult * result))
}
