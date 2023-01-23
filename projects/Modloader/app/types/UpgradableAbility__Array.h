#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpgradableAbility__Array__Class.h>
#include <Modloader/app/structs/UpgradableAbility__Array.h>

namespace app::classes::types {
    namespace UpgradableAbility__Array {
        namespace {
            inline app::UpgradableAbility__Array__Class* type_info_ref = nullptr;
        }
        inline app::UpgradableAbility__Array__Class** type_info = &type_info_ref;
        inline app::UpgradableAbility__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradableAbility__Array__Class>(type_info, "", "UpgradableAbility[]");
        }
        inline app::UpgradableAbility__Array* create() {
            return il2cpp::create_object<app::UpgradableAbility__Array>(get_class());
        }
    } // namespace UpgradableAbility__Array
} // namespace app::classes::types
