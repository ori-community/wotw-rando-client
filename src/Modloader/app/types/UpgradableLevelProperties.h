#pragma once
#include <Modloader/app/structs/UpgradableLevelProperties.h>
#include <Modloader/app/structs/UpgradableLevelProperties__Array.h>
#include <Modloader/app/structs/UpgradableLevelProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradableLevelProperties {
        inline app::UpgradableLevelProperties__Class** type_info() {
            static app::UpgradableLevelProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradableLevelProperties__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradableLevelProperties__Class* get_class() {
            return il2cpp::get_class<app::UpgradableLevelProperties__Class>(type_info(), "", "UpgradableLevelProperties");
        }
        inline app::UpgradableLevelProperties* create() {
            return il2cpp::create_object<app::UpgradableLevelProperties>(get_class());
        }
        inline app::UpgradableLevelProperties__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradableLevelProperties__Array>(get_class(), size);
        }
        inline app::UpgradableLevelProperties__Array* create_array(const std::vector<app::UpgradableLevelProperties*>& items) {
            return il2cpp::array_new<app::UpgradableLevelProperties__Array>(get_class(), items);
        }
    } // namespace UpgradableLevelProperties
} // namespace app::classes::types
