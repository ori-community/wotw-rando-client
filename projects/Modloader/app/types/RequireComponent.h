#pragma once
#include <Modloader/app/structs/RequireComponent.h>
#include <Modloader/app/structs/RequireComponent__Array.h>
#include <Modloader/app/structs/RequireComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequireComponent {
        inline app::RequireComponent__Class** type_info() {
            static app::RequireComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RequireComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RequireComponent__Class* get_class() {
            return il2cpp::get_class<app::RequireComponent__Class>(type_info(), "UnityEngine", "RequireComponent");
        }
        inline app::RequireComponent* create() {
            return il2cpp::create_object<app::RequireComponent>(get_class());
        }
        inline app::RequireComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::RequireComponent__Array>(get_class(), size);
        }
        inline app::RequireComponent__Array* create_array(const std::vector<app::RequireComponent*>& items) {
            return il2cpp::array_new<app::RequireComponent__Array>(get_class(), items);
        }
    } // namespace RequireComponent
} // namespace app::classes::types
