#pragma once
#include <Modloader/app/structs/ShuoldShowHDRToggleCondition.h>
#include <Modloader/app/structs/ShuoldShowHDRToggleCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShuoldShowHDRToggleCondition {
        inline app::ShuoldShowHDRToggleCondition__Class** type_info() {
            static app::ShuoldShowHDRToggleCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShuoldShowHDRToggleCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShuoldShowHDRToggleCondition__Class* get_class() {
            return il2cpp::get_class<app::ShuoldShowHDRToggleCondition__Class>(type_info(), "", "ShuoldShowHDRToggleCondition");
        }
        inline app::ShuoldShowHDRToggleCondition* create() {
            return il2cpp::create_object<app::ShuoldShowHDRToggleCondition>(get_class());
        }
    } // namespace ShuoldShowHDRToggleCondition
} // namespace app::classes::types
