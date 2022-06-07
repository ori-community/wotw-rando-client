#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::AudioSettings_AudioConfigurationChangeHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AudioSettings_AudioConfigurationChangeHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::AudioSettings_AudioConfigurationChangeHandler * this_ptr, bool device_was_changed))
    IL2CPP_REGISTER_METHOD(0x03141760, app::IAsyncResult *, BeginInvoke, (app::AudioSettings_AudioConfigurationChangeHandler * this_ptr, bool device_was_changed, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AudioSettings_AudioConfigurationChangeHandler * this_ptr, app::IAsyncResult * result))
}
