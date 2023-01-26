#pragma once
#include <Modloader/app/structs/State_1.h>
#include <Modloader/app/structs/State_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace State_1 {
        inline app::State_1__Class** type_info() {
            static app::State_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::State_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::State_1__Class* get_class() {
            return il2cpp::get_class<app::State_1__Class>(type_info(), "Moon.InteractionGraph", "State");
        }
        inline app::State_1* create() {
            return il2cpp::create_object<app::State_1>(get_class());
        }
    } // namespace State_1
} // namespace app::classes::types
