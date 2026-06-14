#pragma once
#include <Modloader/app/structs/TransitionManager__Array.h>
#include <Modloader/app/structs/TransitionManager__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransitionManager__Array {
        inline app::TransitionManager__Array__Class** type_info() {
            static app::TransitionManager__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransitionManager__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransitionManager__Array__Class* get_class() {
            return il2cpp::get_class<app::TransitionManager__Array__Class>(type_info(), "Moon.InteractionGraph", "TransitionManager[]");
        }
        inline app::TransitionManager__Array* create() {
            return il2cpp::create_object<app::TransitionManager__Array>(get_class());
        }
    } // namespace TransitionManager__Array
} // namespace app::classes::types
