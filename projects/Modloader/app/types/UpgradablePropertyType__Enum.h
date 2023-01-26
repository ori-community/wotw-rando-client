#pragma once
#include <Modloader/app/structs/UpgradablePropertyType__Enum.h>
#include <Modloader/app/structs/UpgradablePropertyType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradablePropertyType__Enum {
        inline app::UpgradablePropertyType__Enum__Class** type_info() {
            static app::UpgradablePropertyType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradablePropertyType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradablePropertyType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UpgradablePropertyType__Enum__Class>(type_info(), "", "UpgradablePropertyType");
        }
        inline app::UpgradablePropertyType__Enum* create() {
            return il2cpp::create_object<app::UpgradablePropertyType__Enum>(get_class());
        }
    } // namespace UpgradablePropertyType__Enum
} // namespace app::classes::types
