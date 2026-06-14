#pragma once
#include <Modloader/app/structs/GroupPropertyValues.h>
#include <Modloader/app/structs/GroupPropertyValues__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupPropertyValues {
        inline app::GroupPropertyValues__Class** type_info() {
            static app::GroupPropertyValues__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupPropertyValues__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupPropertyValues__Class* get_class() {
            return il2cpp::get_class<app::GroupPropertyValues__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupPropertyValues");
        }
        inline app::GroupPropertyValues* create() {
            return il2cpp::create_object<app::GroupPropertyValues>(get_class());
        }
    } // namespace GroupPropertyValues
} // namespace app::classes::types
