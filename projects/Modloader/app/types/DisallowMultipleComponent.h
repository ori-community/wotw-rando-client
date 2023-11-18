#pragma once
#include <Modloader/app/structs/DisallowMultipleComponent.h>
#include <Modloader/app/structs/DisallowMultipleComponent__Array.h>
#include <Modloader/app/structs/DisallowMultipleComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisallowMultipleComponent {
        inline app::DisallowMultipleComponent__Class** type_info() {
            static app::DisallowMultipleComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisallowMultipleComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisallowMultipleComponent__Class* get_class() {
            return il2cpp::get_class<app::DisallowMultipleComponent__Class>(type_info(), "UnityEngine", "DisallowMultipleComponent");
        }
        inline app::DisallowMultipleComponent* create() {
            return il2cpp::create_object<app::DisallowMultipleComponent>(get_class());
        }
        inline app::DisallowMultipleComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::DisallowMultipleComponent__Array>(get_class(), size);
        }
        inline app::DisallowMultipleComponent__Array* create_array(const std::vector<app::DisallowMultipleComponent*>& items) {
            return il2cpp::array_new<app::DisallowMultipleComponent__Array>(get_class(), items);
        }
    } // namespace DisallowMultipleComponent
} // namespace app::classes::types
