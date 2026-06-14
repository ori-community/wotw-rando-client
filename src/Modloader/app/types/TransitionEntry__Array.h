#pragma once
#include <Modloader/app/structs/TransitionEntry__Array.h>
#include <Modloader/app/structs/TransitionEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransitionEntry__Array {
        inline app::TransitionEntry__Array__Class** type_info() {
            static app::TransitionEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransitionEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransitionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::TransitionEntry__Array__Class>(type_info(), "Moon.ComboSystem", "TransitionEntry[]");
        }
        inline app::TransitionEntry__Array* create() {
            return il2cpp::create_object<app::TransitionEntry__Array>(get_class());
        }
    } // namespace TransitionEntry__Array
} // namespace app::classes::types
