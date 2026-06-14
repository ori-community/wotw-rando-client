#pragma once
#include <Modloader/app/structs/GuardDecorator__Array.h>
#include <Modloader/app/structs/GuardDecorator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuardDecorator__Array {
        inline app::GuardDecorator__Array__Class** type_info() {
            static app::GuardDecorator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuardDecorator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuardDecorator__Array__Class* get_class() {
            return il2cpp::get_class<app::GuardDecorator__Array__Class>(type_info(), "Moon.BehaviourSystem", "GuardDecorator[]");
        }
        inline app::GuardDecorator__Array* create() {
            return il2cpp::create_object<app::GuardDecorator__Array>(get_class());
        }
    } // namespace GuardDecorator__Array
} // namespace app::classes::types
