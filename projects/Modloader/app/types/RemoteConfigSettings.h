#pragma once
#include <Modloader/app/structs/RemoteConfigSettings.h>
#include <Modloader/app/structs/RemoteConfigSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteConfigSettings {
        inline app::RemoteConfigSettings__Class** type_info() {
            static app::RemoteConfigSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteConfigSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteConfigSettings__Class* get_class() {
            return il2cpp::get_class<app::RemoteConfigSettings__Class>(type_info(), "UnityEngine", "RemoteConfigSettings");
        }
        inline app::RemoteConfigSettings* create() {
            return il2cpp::create_object<app::RemoteConfigSettings>(get_class());
        }
    } // namespace RemoteConfigSettings
} // namespace app::classes::types
