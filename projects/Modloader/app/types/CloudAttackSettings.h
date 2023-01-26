#pragma once
#include <Modloader/app/structs/CloudAttackSettings.h>
#include <Modloader/app/structs/CloudAttackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CloudAttackSettings {
        inline app::CloudAttackSettings__Class** type_info() {
            static app::CloudAttackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CloudAttackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CloudAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::CloudAttackSettings__Class>(type_info(), "", "CloudAttackSettings");
        }
        inline app::CloudAttackSettings* create() {
            return il2cpp::create_object<app::CloudAttackSettings>(get_class());
        }
    } // namespace CloudAttackSettings
} // namespace app::classes::types
