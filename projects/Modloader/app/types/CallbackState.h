#pragma once
#include <Modloader/app/structs/CallbackState.h>
#include <Modloader/app/structs/CallbackState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallbackState {
        inline app::CallbackState__Class** type_info() {
            static app::CallbackState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallbackState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallbackState__Class* get_class() {
            return il2cpp::get_class<app::CallbackState__Class>(type_info(), "Moon.InteractionGraph", "CallbackState");
        }
        inline app::CallbackState* create() {
            return il2cpp::create_object<app::CallbackState>(get_class());
        }
    } // namespace CallbackState
} // namespace app::classes::types
