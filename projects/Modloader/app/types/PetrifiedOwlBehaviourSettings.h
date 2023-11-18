#pragma once
#include <Modloader/app/structs/PetrifiedOwlBehaviourSettings.h>
#include <Modloader/app/structs/PetrifiedOwlBehaviourSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBehaviourSettings {
        inline app::PetrifiedOwlBehaviourSettings__Class** type_info() {
            static app::PetrifiedOwlBehaviourSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBehaviourSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBehaviourSettings__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBehaviourSettings__Class>(type_info(), "", "PetrifiedOwlBehaviourSettings");
        }
        inline app::PetrifiedOwlBehaviourSettings* create() {
            return il2cpp::create_object<app::PetrifiedOwlBehaviourSettings>(get_class());
        }
    } // namespace PetrifiedOwlBehaviourSettings
} // namespace app::classes::types
