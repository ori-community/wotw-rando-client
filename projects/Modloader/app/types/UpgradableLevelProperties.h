#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpgradableLevelProperties__Class.h>
#include <Modloader/app/structs/UpgradableLevelProperties.h>
#include <Modloader/app/structs/UpgradableLevelProperties__Array.h>

namespace app::classes::types {
    namespace UpgradableLevelProperties {
        namespace {
            inline app::UpgradableLevelProperties__Class* type_info_ref = nullptr;
        }
        inline app::UpgradableLevelProperties__Class** type_info = &type_info_ref;
        inline app::UpgradableLevelProperties__Class* get_class() {
            return il2cpp::get_class<app::UpgradableLevelProperties__Class>(type_info, "", "UpgradableLevelProperties");
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
