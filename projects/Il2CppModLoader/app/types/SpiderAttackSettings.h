#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderAttackSettings {
        namespace {
            app::SpiderAttackSettings__Class* type_info_ref = nullptr;
        }
        app::SpiderAttackSettings__Class** type_info = &type_info_ref;
        inline app::SpiderAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::SpiderAttackSettings__Class>(type_info, "", "SpiderAttackSettings");
        }
        inline app::SpiderAttackSettings* create() {
            return il2cpp::create_object<app::SpiderAttackSettings>(get_class());
        }
    } // namespace SpiderAttackSettings
} // namespace app::classes::types
