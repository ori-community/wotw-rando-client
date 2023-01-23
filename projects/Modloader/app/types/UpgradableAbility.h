#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpgradableAbility__Class.h>
#include <Modloader/app/structs/UpgradableAbility.h>
#include <Modloader/app/structs/UpgradableAbility__Array.h>

namespace app::classes::types {
    namespace UpgradableAbility {
        namespace {
            inline app::UpgradableAbility__Class* type_info_ref = nullptr;
        }
        inline app::UpgradableAbility__Class** type_info = &type_info_ref;
        inline app::UpgradableAbility__Class* get_class() {
            return il2cpp::get_class<app::UpgradableAbility__Class>(type_info, "", "UpgradableAbility");
        }
        inline app::UpgradableAbility* create() {
            return il2cpp::create_object<app::UpgradableAbility>(get_class());
        }
        inline app::UpgradableAbility__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradableAbility__Array>(get_class(), size);
        }
        inline app::UpgradableAbility__Array* create_array(const std::vector<app::UpgradableAbility*>& items) {
            return il2cpp::array_new<app::UpgradableAbility__Array>(get_class(), items);
        }
    } // namespace UpgradableAbility
} // namespace app::classes::types
