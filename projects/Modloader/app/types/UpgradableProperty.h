#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpgradableProperty__Class.h>
#include <Modloader/app/structs/UpgradableProperty.h>
#include <Modloader/app/structs/UpgradableProperty__Array.h>

namespace app::classes::types {
    namespace UpgradableProperty {
        namespace {
            inline app::UpgradableProperty__Class* type_info_ref = nullptr;
        }
        inline app::UpgradableProperty__Class** type_info = &type_info_ref;
        inline app::UpgradableProperty__Class* get_class() {
            return il2cpp::get_class<app::UpgradableProperty__Class>(type_info, "", "UpgradableProperty");
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
