#pragma once
#include <Modloader/app/structs/CustomPlaybackSettings.h>
#include <Modloader/app/structs/CustomPlaybackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomPlaybackSettings {
        inline app::CustomPlaybackSettings__Class** type_info() {
            static app::CustomPlaybackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomPlaybackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomPlaybackSettings__Class* get_class() {
            return il2cpp::get_class<app::CustomPlaybackSettings__Class>(type_info(), "Moon.Timeline", "CustomPlaybackSettings");
        }
        inline app::CustomPlaybackSettings* create() {
            return il2cpp::create_object<app::CustomPlaybackSettings>(get_class());
        }
    } // namespace CustomPlaybackSettings
} // namespace app::classes::types
