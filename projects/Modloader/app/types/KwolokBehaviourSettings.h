#pragma once
#include <Modloader/app/structs/KwolokBehaviourSettings.h>
#include <Modloader/app/structs/KwolokBehaviourSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBehaviourSettings {
        inline app::KwolokBehaviourSettings__Class** type_info() {
            static app::KwolokBehaviourSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBehaviourSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBehaviourSettings__Class* get_class() {
            return il2cpp::get_class<app::KwolokBehaviourSettings__Class>(type_info(), "", "KwolokBehaviourSettings");
        }
        inline app::KwolokBehaviourSettings* create() {
            return il2cpp::create_object<app::KwolokBehaviourSettings>(get_class());
        }
    } // namespace KwolokBehaviourSettings
} // namespace app::classes::types
