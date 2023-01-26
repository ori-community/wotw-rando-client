#pragma once
#include <Modloader/app/structs/Transition_1__Array.h>
#include <Modloader/app/structs/Transition_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Transition_1__Array {
        inline app::Transition_1__Array__Class** type_info() {
            static app::Transition_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Transition_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Transition_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Transition_1__Array__Class>(type_info(), "fsm", "Transition[]");
        }
        inline app::Transition_1__Array* create() {
            return il2cpp::create_object<app::Transition_1__Array>(get_class());
        }
    } // namespace Transition_1__Array
} // namespace app::classes::types
