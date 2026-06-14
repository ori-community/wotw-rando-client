#pragma once
#include <Modloader/app/structs/NotCondition.h>
#include <Modloader/app/structs/NotCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotCondition {
        inline app::NotCondition__Class** type_info() {
            static app::NotCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NotCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NotCondition__Class* get_class() {
            return il2cpp::get_class<app::NotCondition__Class>(type_info(), "", "NotCondition");
        }
        inline app::NotCondition* create() {
            return il2cpp::create_object<app::NotCondition>(get_class());
        }
    } // namespace NotCondition
} // namespace app::classes::types
