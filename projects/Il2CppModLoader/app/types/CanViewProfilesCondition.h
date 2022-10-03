#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CanViewProfilesCondition {
        namespace {
            app::CanViewProfilesCondition__Class* type_info_ref = nullptr;
        }
        app::CanViewProfilesCondition__Class** type_info = &type_info_ref;
        inline app::CanViewProfilesCondition__Class* get_class() {
            return il2cpp::get_class<app::CanViewProfilesCondition__Class>(type_info, "", "CanViewProfilesCondition");
        }
        inline app::CanViewProfilesCondition* create() {
            return il2cpp::create_object<app::CanViewProfilesCondition>(get_class());
        }
    } // namespace CanViewProfilesCondition
} // namespace app::classes::types
