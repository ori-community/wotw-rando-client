#pragma once
#include <Modloader/app/structs/UpgradableProperty.h>
#include <Modloader/app/structs/UpgradableProperty__Array.h>
#include <Modloader/app/structs/UpgradableProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradableProperty {
        inline app::UpgradableProperty__Class** type_info() {
            static app::UpgradableProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradableProperty__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradableProperty__Class* get_class() {
            return il2cpp::get_class<app::UpgradableProperty__Class>(type_info(), "", "UpgradableProperty");
        }
        inline app::UpgradableProperty* create() {
            return il2cpp::create_object<app::UpgradableProperty>(get_class());
        }
        inline app::UpgradableProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradableProperty__Array>(get_class(), size);
        }
        inline app::UpgradableProperty__Array* create_array(const std::vector<app::UpgradableProperty*>& items) {
            return il2cpp::array_new<app::UpgradableProperty__Array>(get_class(), items);
        }
    } // namespace UpgradableProperty
} // namespace app::classes::types
