#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::AudioListener {
    IL2CPP_REGISTER_METHOD(0x03140E60, int32_t, GetNumExtensionProperties, (app::AudioListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03140EB0, app::PropertyName, ReadExtensionName, (app::AudioListener * this_ptr, int32_t listener_index))
    IL2CPP_REGISTER_METHOD(0x03140F20, void, INTERNAL_CALL_ReadExtensionName, (app::AudioListener * self, int32_t listener_index, app::PropertyName* value))
    IL2CPP_REGISTER_METHOD(0x03140F90, app::PropertyName, ReadExtensionPropertyName, (app::AudioListener * this_ptr, int32_t listener_index))
    IL2CPP_REGISTER_METHOD(0x03141000, void, INTERNAL_CALL_ReadExtensionPropertyName, (app::AudioListener * self, int32_t listener_index, app::PropertyName* value))
    IL2CPP_REGISTER_METHOD(0x03141070, float, ReadExtensionPropertyValue, (app::AudioListener * this_ptr, int32_t listener_index))
    IL2CPP_REGISTER_METHOD(0x031410D0, void, ClearExtensionProperties, (app::AudioListener * this_ptr, app::PropertyName extension_name))
    IL2CPP_REGISTER_METHOD(0x03141130, void, INTERNAL_CALL_ClearExtensionProperties, (app::AudioListener * self, app::PropertyName* extension_name))
    IL2CPP_REGISTER_METHOD(0x03141190, app::AudioListenerExtension*, AddExtension, (app::AudioListener * this_ptr, app::Type* extension_type))
} // namespace app::classes::UnityEngine::AudioListener
