#pragma once
#include <Modloader/app/structs/UtilityDecorator.h>
#include <Modloader/app/structs/UtilityDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UtilityDecorator {
        inline app::UtilityDecorator__Class** type_info() {
            static app::UtilityDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UtilityDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UtilityDecorator__Class* get_class() {
            return il2cpp::get_class<app::UtilityDecorator__Class>(type_info(), "Moon.BehaviourSystem", "UtilityDecorator");
        }
        inline app::UtilityDecorator* create() {
            return il2cpp::create_object<app::UtilityDecorator>(get_class());
        }
    } // namespace UtilityDecorator
} // namespace app::classes::types
