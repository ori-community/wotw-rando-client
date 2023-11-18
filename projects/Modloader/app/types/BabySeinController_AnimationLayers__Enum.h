#pragma once
#include <Modloader/app/structs/BabySeinController_AnimationLayers__Enum.h>
#include <Modloader/app/structs/BabySeinController_AnimationLayers__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabySeinController_AnimationLayers__Enum {
        inline app::BabySeinController_AnimationLayers__Enum__Class** type_info() {
            static app::BabySeinController_AnimationLayers__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabySeinController_AnimationLayers__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabySeinController_AnimationLayers__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BabySeinController_AnimationLayers__Enum__Class>(type_info(), "", "BabySeinController", "AnimationLayers");
        }
        inline app::BabySeinController_AnimationLayers__Enum* create() {
            return il2cpp::create_object<app::BabySeinController_AnimationLayers__Enum>(get_class());
        }
    } // namespace BabySeinController_AnimationLayers__Enum
} // namespace app::classes::types
