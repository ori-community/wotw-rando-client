#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAudioSourceChangeCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkAudioSourceChangeCallbackInfo__Class** type_info;
        inline app::AkAudioSourceChangeCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkAudioSourceChangeCallbackInfo__Class>(type_info, "", "AkAudioSourceChangeCallbackInfo");
        }
        inline app::AkAudioSourceChangeCallbackInfo* create() {
            return il2cpp::create_object<app::AkAudioSourceChangeCallbackInfo>(get_class());
        }
    } // namespace AkAudioSourceChangeCallbackInfo
} // namespace app::classes::types
