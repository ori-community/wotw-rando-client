#pragma once
#include <Modloader/app/structs/HumanTrait.h>
#include <Modloader/app/structs/HumanTrait__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HumanTrait {
        inline app::HumanTrait__Class** type_info() {
            static app::HumanTrait__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HumanTrait__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HumanTrait__Class* get_class() {
            return il2cpp::get_class<app::HumanTrait__Class>(type_info(), "UnityEngine", "HumanTrait");
        }
        inline app::HumanTrait* create() {
            return il2cpp::create_object<app::HumanTrait>(get_class());
        }
    } // namespace HumanTrait
} // namespace app::classes::types
