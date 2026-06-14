#pragma once
#include <Modloader/app/structs/Transition__Array.h>
#include <Modloader/app/structs/Transition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Transition__Array {
        inline app::Transition__Array__Class** type_info() {
            static app::Transition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Transition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Transition__Array__Class* get_class() {
            return il2cpp::get_class<app::Transition__Array__Class>(type_info(), "Moon.InteractionGraph", "Transition[]");
        }
        inline app::Transition__Array* create() {
            return il2cpp::create_object<app::Transition__Array>(get_class());
        }
    } // namespace Transition__Array
} // namespace app::classes::types
