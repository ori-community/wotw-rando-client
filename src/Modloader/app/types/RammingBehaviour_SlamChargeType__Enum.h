#pragma once
#include <Modloader/app/structs/RammingBehaviour_SlamChargeType__Enum.h>
#include <Modloader/app/structs/RammingBehaviour_SlamChargeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_SlamChargeType__Enum {
        inline app::RammingBehaviour_SlamChargeType__Enum__Class** type_info() {
            static app::RammingBehaviour_SlamChargeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingBehaviour_SlamChargeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingBehaviour_SlamChargeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_SlamChargeType__Enum__Class>(type_info(), "Moon", "RammingBehaviour", "SlamChargeType");
        }
        inline app::RammingBehaviour_SlamChargeType__Enum* create() {
            return il2cpp::create_object<app::RammingBehaviour_SlamChargeType__Enum>(get_class());
        }
    } // namespace RammingBehaviour_SlamChargeType__Enum
} // namespace app::classes::types
