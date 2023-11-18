#pragma once
#include <Modloader/app/structs/CanViewProfilesCondition.h>
#include <Modloader/app/structs/CanViewProfilesCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanViewProfilesCondition {
        inline app::CanViewProfilesCondition__Class** type_info() {
            static app::CanViewProfilesCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanViewProfilesCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanViewProfilesCondition__Class* get_class() {
            return il2cpp::get_class<app::CanViewProfilesCondition__Class>(type_info(), "", "CanViewProfilesCondition");
        }
        inline app::CanViewProfilesCondition* create() {
            return il2cpp::create_object<app::CanViewProfilesCondition>(get_class());
        }
    } // namespace CanViewProfilesCondition
} // namespace app::classes::types
