#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::PlayerPrefs {
    IL2CPP_REGISTER_METHOD(0x02967A40, bool, TrySetInt, (app::String * key, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02967AA0, bool, TrySetFloat, (app::String * key, float value))
    IL2CPP_REGISTER_METHOD(0x02967B00, bool, TrySetSetString, (app::String * key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02967B60, void, SetInt, (app::String * key, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x047601C8, PlayerPrefs_SetInt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02967C60, int32_t, GetInt, (app::String * key, int32_t default_value))
    IL2CPP_REGISTER_METHOD(0x02967CC0, void, SetFloat, (app::String * key, float value))
    IL2CPP_REGISTER_METHODINFO(0x04724D00, PlayerPrefs_SetFloat__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02967DC0, float, GetFloat, (app::String * key, float default_value))
    IL2CPP_REGISTER_METHOD(0x02967E20, void, SetString, (app::String * key, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x047215B8, PlayerPrefs_SetString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02967F20, app::String*, GetString, (app::String * key, app::String* default_value))
    IL2CPP_REGISTER_METHOD(0x02967F80, void, DeleteKey, (app::String * key))
    IL2CPP_REGISTER_METHOD(0x02967FD0, void, Save, ())
} // namespace app::classes::UnityEngine::PlayerPrefs
