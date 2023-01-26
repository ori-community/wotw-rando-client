#pragma once
#include <Modloader/app/structs/ConditionalDecorator.h>
#include <Modloader/app/structs/ConditionalDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionalDecorator {
        inline app::ConditionalDecorator__Class** type_info() {
            static app::ConditionalDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionalDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionalDecorator__Class* get_class() {
            return il2cpp::get_class<app::ConditionalDecorator__Class>(type_info(), "Moon.BehaviourSystem", "ConditionalDecorator");
        }
        inline app::ConditionalDecorator* create() {
            return il2cpp::create_object<app::ConditionalDecorator>(get_class());
        }
    } // namespace ConditionalDecorator
} // namespace app::classes::types
