#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayFab::Internal::PlayFabUtil {
    IL2CPP_REGISTER_METHOD(0x0183FF40, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01840570, app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*, get_ApiSerializerStrategy, ())
    IL2CPP_REGISTER_METHOD(0x01840610, app::String*, get_timeStamp, ())
    IL2CPP_REGISTER_METHOD(0x01840710, app::String*, get_utcTimeStamp, ())
    IL2CPP_REGISTER_METHOD(0x01840810, app::String*, Format, (app::String * text, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x01840840, app::String*, ReadAllFileText, (app::String * filename))
    IL2CPP_REGISTER_METHOD(0x01840F40, app::String*, GetLocalSettingsFileProperty, (app::String * property_key))
} // namespace app::classes::PlayFab::Internal::PlayFabUtil
