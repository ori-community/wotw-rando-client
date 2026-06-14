#pragma once
#include <Modloader/app/structs/CooldownDecorator.h>
#include <Modloader/app/structs/CooldownDecorator__Array.h>
#include <Modloader/app/structs/CooldownDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CooldownDecorator {
        inline app::CooldownDecorator__Class** type_info() {
            static app::CooldownDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CooldownDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CooldownDecorator__Class* get_class() {
            return il2cpp::get_class<app::CooldownDecorator__Class>(type_info(), "Moon.BehaviourSystem", "CooldownDecorator");
        }
        inline app::CooldownDecorator* create() {
            return il2cpp::create_object<app::CooldownDecorator>(get_class());
        }
        inline app::CooldownDecorator__Array* create_array(int size) {
            return il2cpp::array_new<app::CooldownDecorator__Array>(get_class(), size);
        }
        inline app::CooldownDecorator__Array* create_array(const std::vector<app::CooldownDecorator*>& items) {
            return il2cpp::array_new<app::CooldownDecorator__Array>(get_class(), items);
        }
    } // namespace CooldownDecorator
} // namespace app::classes::types
