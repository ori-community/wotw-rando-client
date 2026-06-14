#pragma once
#include <Modloader/app/structs/OnFixedUpdate.h>
#include <Modloader/app/structs/OnFixedUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnFixedUpdate {
        inline app::OnFixedUpdate__Class** type_info() {
            static app::OnFixedUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnFixedUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnFixedUpdate__Class* get_class() {
            return il2cpp::get_class<app::OnFixedUpdate__Class>(type_info(), "Moon.InteractionGraph", "OnFixedUpdate");
        }
        inline app::OnFixedUpdate* create() {
            return il2cpp::create_object<app::OnFixedUpdate>(get_class());
        }
    } // namespace OnFixedUpdate
} // namespace app::classes::types
