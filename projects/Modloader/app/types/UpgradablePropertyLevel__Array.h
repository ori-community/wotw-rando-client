#pragma once
#include <Modloader/app/structs/UpgradablePropertyLevel__Array.h>
#include <Modloader/app/structs/UpgradablePropertyLevel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradablePropertyLevel__Array {
        inline app::UpgradablePropertyLevel__Array__Class** type_info() {
            static app::UpgradablePropertyLevel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradablePropertyLevel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradablePropertyLevel__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradablePropertyLevel__Array__Class>(type_info(), "", "UpgradablePropertyLevel[]");
        }
        inline app::UpgradablePropertyLevel__Array* create() {
            return il2cpp::create_object<app::UpgradablePropertyLevel__Array>(get_class());
        }
    } // namespace UpgradablePropertyLevel__Array
} // namespace app::classes::types
