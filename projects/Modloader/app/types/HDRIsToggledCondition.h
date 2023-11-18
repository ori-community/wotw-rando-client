#pragma once
#include <Modloader/app/structs/HDRIsToggledCondition.h>
#include <Modloader/app/structs/HDRIsToggledCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HDRIsToggledCondition {
        inline app::HDRIsToggledCondition__Class** type_info() {
            static app::HDRIsToggledCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HDRIsToggledCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HDRIsToggledCondition__Class* get_class() {
            return il2cpp::get_class<app::HDRIsToggledCondition__Class>(type_info(), "", "HDRIsToggledCondition");
        }
        inline app::HDRIsToggledCondition* create() {
            return il2cpp::create_object<app::HDRIsToggledCondition>(get_class());
        }
    } // namespace HDRIsToggledCondition
} // namespace app::classes::types
