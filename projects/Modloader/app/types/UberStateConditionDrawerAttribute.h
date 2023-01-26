#pragma once
#include <Modloader/app/structs/UberStateConditionDrawerAttribute.h>
#include <Modloader/app/structs/UberStateConditionDrawerAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateConditionDrawerAttribute {
        inline app::UberStateConditionDrawerAttribute__Class** type_info() {
            static app::UberStateConditionDrawerAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateConditionDrawerAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateConditionDrawerAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberStateConditionDrawerAttribute__Class>(type_info(), "", "UberStateConditionDrawerAttribute");
        }
        inline app::UberStateConditionDrawerAttribute* create() {
            return il2cpp::create_object<app::UberStateConditionDrawerAttribute>(get_class());
        }
    } // namespace UberStateConditionDrawerAttribute
} // namespace app::classes::types
