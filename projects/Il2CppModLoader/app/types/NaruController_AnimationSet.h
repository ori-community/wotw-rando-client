#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NaruController_AnimationSet {
        namespace {
            app::NaruController_AnimationSet__Class* type_info_ref = nullptr;
        }
        app::NaruController_AnimationSet__Class** type_info = &type_info_ref;
        inline app::NaruController_AnimationSet__Class* get_class() {
            return il2cpp::get_nested_class<app::NaruController_AnimationSet__Class>(type_info, "", "NaruController", "AnimationSet");
        }
        inline app::NaruController_AnimationSet* create() {
            return il2cpp::create_object<app::NaruController_AnimationSet>(get_class());
        }
    } // namespace NaruController_AnimationSet
} // namespace app::classes::types
