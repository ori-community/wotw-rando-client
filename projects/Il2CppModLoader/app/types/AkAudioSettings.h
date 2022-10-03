#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAudioSettings {
        namespace {
            app::AkAudioSettings__Class* type_info_ref = nullptr;
        }
        app::AkAudioSettings__Class** type_info = &type_info_ref;
        inline app::AkAudioSettings__Class* get_class() {
            return il2cpp::get_class<app::AkAudioSettings__Class>(type_info, "", "AkAudioSettings");
        }
        inline app::AkAudioSettings* create() {
            return il2cpp::create_object<app::AkAudioSettings>(get_class());
        }
    } // namespace AkAudioSettings
} // namespace app::classes::types
