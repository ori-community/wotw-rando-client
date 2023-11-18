#pragma once
#include <Modloader/app/structs/OnFixedUpdate_1.h>
#include <Modloader/app/structs/OnFixedUpdate_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnFixedUpdate_1 {
        inline app::OnFixedUpdate_1__Class** type_info() {
            static app::OnFixedUpdate_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnFixedUpdate_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnFixedUpdate_1__Class* get_class() {
            return il2cpp::get_class<app::OnFixedUpdate_1__Class>(type_info(), "fsm.triggers", "OnFixedUpdate");
        }
        inline app::OnFixedUpdate_1* create() {
            return il2cpp::create_object<app::OnFixedUpdate_1>(get_class());
        }
    } // namespace OnFixedUpdate_1
} // namespace app::classes::types
