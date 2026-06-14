#pragma once
#include <Modloader/app/structs/ChangeStateSetupData__Array.h>
#include <Modloader/app/structs/ChangeStateSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateSetupData__Array {
        inline app::ChangeStateSetupData__Array__Class** type_info() {
            static app::ChangeStateSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateSetupData__Array__Class>(type_info(), "Moon.Setups", "ChangeStateSetupData[]");
        }
        inline app::ChangeStateSetupData__Array* create() {
            return il2cpp::create_object<app::ChangeStateSetupData__Array>(get_class());
        }
    } // namespace ChangeStateSetupData__Array
} // namespace app::classes::types
