#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabySeinController_AnimationSet {
        namespace {
            app::BabySeinController_AnimationSet__Class* type_info_ref = nullptr;
        }
        app::BabySeinController_AnimationSet__Class** type_info = &type_info_ref;
        inline app::BabySeinController_AnimationSet__Class* get_class() {
            return il2cpp::get_nested_class<app::BabySeinController_AnimationSet__Class>(type_info, "", "BabySeinController", "AnimationSet");
        }
        inline app::BabySeinController_AnimationSet* create() {
            return il2cpp::create_object<app::BabySeinController_AnimationSet>(get_class());
        }
    } // namespace BabySeinController_AnimationSet
} // namespace app::classes::types
