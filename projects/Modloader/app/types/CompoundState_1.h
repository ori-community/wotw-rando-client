#pragma once
#include <Modloader/app/structs/CompoundState_1.h>
#include <Modloader/app/structs/CompoundState_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompoundState_1 {
        inline app::CompoundState_1__Class** type_info() {
            static app::CompoundState_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompoundState_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompoundState_1__Class* get_class() {
            return il2cpp::get_class<app::CompoundState_1__Class>(type_info(), "fsm", "CompoundState");
        }
        inline app::CompoundState_1* create() {
            return il2cpp::create_object<app::CompoundState_1>(get_class());
        }
    } // namespace CompoundState_1
} // namespace app::classes::types
