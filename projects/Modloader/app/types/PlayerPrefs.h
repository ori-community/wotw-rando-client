#pragma once
#include <Modloader/app/structs/PlayerPrefs.h>
#include <Modloader/app/structs/PlayerPrefs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerPrefs {
        inline app::PlayerPrefs__Class** type_info() {
            static app::PlayerPrefs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerPrefs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerPrefs__Class* get_class() {
            return il2cpp::get_class<app::PlayerPrefs__Class>(type_info(), "UnityEngine", "PlayerPrefs");
        }
        inline app::PlayerPrefs* create() {
            return il2cpp::create_object<app::PlayerPrefs>(get_class());
        }
    } // namespace PlayerPrefs
} // namespace app::classes::types
