#pragma once
#include <Modloader/app/structs/TransitionManager_1__Array.h>
#include <Modloader/app/structs/TransitionManager_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransitionManager_1__Array {
        inline app::TransitionManager_1__Array__Class** type_info() {
            static app::TransitionManager_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransitionManager_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransitionManager_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TransitionManager_1__Array__Class>(type_info(), "fsm", "TransitionManager[]");
        }
        inline app::TransitionManager_1__Array* create() {
            return il2cpp::create_object<app::TransitionManager_1__Array>(get_class());
        }
    } // namespace TransitionManager_1__Array
} // namespace app::classes::types
