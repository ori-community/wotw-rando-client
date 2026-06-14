#pragma once
#include <Modloader/app/structs/CompoundState.h>
#include <Modloader/app/structs/CompoundState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompoundState {
        inline app::CompoundState__Class** type_info() {
            static app::CompoundState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompoundState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompoundState__Class* get_class() {
            return il2cpp::get_class<app::CompoundState__Class>(type_info(), "Moon.InteractionGraph", "CompoundState");
        }
        inline app::CompoundState* create() {
            return il2cpp::create_object<app::CompoundState>(get_class());
        }
    } // namespace CompoundState
} // namespace app::classes::types
