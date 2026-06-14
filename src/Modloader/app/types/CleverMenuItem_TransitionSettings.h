#pragma once
#include <Modloader/app/structs/CleverMenuItem_TransitionSettings.h>
#include <Modloader/app/structs/CleverMenuItem_TransitionSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItem_TransitionSettings {
        inline app::CleverMenuItem_TransitionSettings__Class** type_info() {
            static app::CleverMenuItem_TransitionSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItem_TransitionSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItem_TransitionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItem_TransitionSettings__Class>(type_info(), "", "CleverMenuItem", "TransitionSettings");
        }
        inline app::CleverMenuItem_TransitionSettings* create() {
            return il2cpp::create_object<app::CleverMenuItem_TransitionSettings>(get_class());
        }
    } // namespace CleverMenuItem_TransitionSettings
} // namespace app::classes::types
