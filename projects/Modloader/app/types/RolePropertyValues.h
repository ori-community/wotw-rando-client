#pragma once
#include <Modloader/app/structs/RolePropertyValues.h>
#include <Modloader/app/structs/RolePropertyValues__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RolePropertyValues {
        inline app::RolePropertyValues__Class** type_info() {
            static app::RolePropertyValues__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RolePropertyValues__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RolePropertyValues__Class* get_class() {
            return il2cpp::get_class<app::RolePropertyValues__Class>(type_info(), "PlayFab.PlayStreamModels", "RolePropertyValues");
        }
        inline app::RolePropertyValues* create() {
            return il2cpp::create_object<app::RolePropertyValues>(get_class());
        }
    } // namespace RolePropertyValues
} // namespace app::classes::types
