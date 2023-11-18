#pragma once
#include <Modloader/app/structs/ActionDecorator.h>
#include <Modloader/app/structs/ActionDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionDecorator {
        inline app::ActionDecorator__Class** type_info() {
            static app::ActionDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionDecorator__Class* get_class() {
            return il2cpp::get_class<app::ActionDecorator__Class>(type_info(), "Moon.BehaviourSystem", "ActionDecorator");
        }
        inline app::ActionDecorator* create() {
            return il2cpp::create_object<app::ActionDecorator>(get_class());
        }
    } // namespace ActionDecorator
} // namespace app::classes::types
