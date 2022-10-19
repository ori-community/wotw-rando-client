#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PickupCollectedCondition {
        namespace {
            inline app::PickupCollectedCondition__Class* type_info_ref = nullptr;
        }
        inline app::PickupCollectedCondition__Class** type_info = &type_info_ref;
        inline app::PickupCollectedCondition__Class* get_class() {
            return il2cpp::get_class<app::PickupCollectedCondition__Class>(type_info, "", "PickupCollectedCondition");
        }
        inline app::PickupCollectedCondition* create() {
            return il2cpp::create_object<app::PickupCollectedCondition>(get_class());
        }
    } // namespace PickupCollectedCondition
} // namespace app::classes::types
