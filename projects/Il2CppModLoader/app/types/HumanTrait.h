#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HumanTrait {
        namespace {
            app::HumanTrait__Class* type_info_ref = nullptr;
        }
        app::HumanTrait__Class** type_info = &type_info_ref;
        inline app::HumanTrait__Class* get_class() {
            return il2cpp::get_class<app::HumanTrait__Class>(type_info, "UnityEngine", "HumanTrait");
        }
        inline app::HumanTrait* create() {
            return il2cpp::create_object<app::HumanTrait>(get_class());
        }
    } // namespace HumanTrait
} // namespace app::classes::types
