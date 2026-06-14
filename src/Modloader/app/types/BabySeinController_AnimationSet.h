#pragma once
#include <Modloader/app/structs/BabySeinController_AnimationSet.h>
#include <Modloader/app/structs/BabySeinController_AnimationSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabySeinController_AnimationSet {
        inline app::BabySeinController_AnimationSet__Class** type_info() {
            static app::BabySeinController_AnimationSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabySeinController_AnimationSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabySeinController_AnimationSet__Class* get_class() {
            return il2cpp::get_nested_class<app::BabySeinController_AnimationSet__Class>(type_info(), "", "BabySeinController", "AnimationSet");
        }
        inline app::BabySeinController_AnimationSet* create() {
            return il2cpp::create_object<app::BabySeinController_AnimationSet>(get_class());
        }
    } // namespace BabySeinController_AnimationSet
} // namespace app::classes::types
