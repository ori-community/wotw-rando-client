#pragma once
#include <Modloader/app/structs/SepiaTone.h>
#include <Modloader/app/structs/SepiaTone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SepiaTone {
        inline app::SepiaTone__Class** type_info() {
            static app::SepiaTone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SepiaTone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SepiaTone__Class* get_class() {
            return il2cpp::get_class<app::SepiaTone__Class>(type_info(), "UnityStandardAssets.ImageEffects", "SepiaTone");
        }
        inline app::SepiaTone* create() {
            return il2cpp::create_object<app::SepiaTone>(get_class());
        }
    } // namespace SepiaTone
} // namespace app::classes::types
