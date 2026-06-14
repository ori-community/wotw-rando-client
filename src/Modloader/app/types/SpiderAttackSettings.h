#pragma once
#include <Modloader/app/structs/SpiderAttackSettings.h>
#include <Modloader/app/structs/SpiderAttackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderAttackSettings {
        inline app::SpiderAttackSettings__Class** type_info() {
            static app::SpiderAttackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderAttackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::SpiderAttackSettings__Class>(type_info(), "", "SpiderAttackSettings");
        }
        inline app::SpiderAttackSettings* create() {
            return il2cpp::create_object<app::SpiderAttackSettings>(get_class());
        }
    } // namespace SpiderAttackSettings
} // namespace app::classes::types
