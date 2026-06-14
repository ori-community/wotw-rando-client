#pragma once
#include <Modloader/app/structs/WaitForConditionEntity.h>
#include <Modloader/app/structs/WaitForConditionEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForConditionEntity {
        inline app::WaitForConditionEntity__Class** type_info() {
            static app::WaitForConditionEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitForConditionEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitForConditionEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForConditionEntity__Class>(type_info(), "Moon.Timeline", "WaitForConditionEntity");
        }
        inline app::WaitForConditionEntity* create() {
            return il2cpp::create_object<app::WaitForConditionEntity>(get_class());
        }
    } // namespace WaitForConditionEntity
} // namespace app::classes::types
