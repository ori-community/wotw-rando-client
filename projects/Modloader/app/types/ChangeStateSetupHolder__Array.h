#pragma once
#include <Modloader/app/structs/ChangeStateSetupHolder__Array.h>
#include <Modloader/app/structs/ChangeStateSetupHolder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateSetupHolder__Array {
        inline app::ChangeStateSetupHolder__Array__Class** type_info() {
            static app::ChangeStateSetupHolder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateSetupHolder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateSetupHolder__Array__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateSetupHolder__Array__Class>(type_info(), "Moon.Setups", "ChangeStateSetupHolder[]");
        }
        inline app::ChangeStateSetupHolder__Array* create() {
            return il2cpp::create_object<app::ChangeStateSetupHolder__Array>(get_class());
        }
    } // namespace ChangeStateSetupHolder__Array
} // namespace app::classes::types
