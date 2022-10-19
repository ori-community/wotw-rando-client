#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisallowMultipleComponent {
        namespace {
            inline app::DisallowMultipleComponent__Class* type_info_ref = nullptr;
        }
        inline app::DisallowMultipleComponent__Class** type_info = &type_info_ref;
        inline app::DisallowMultipleComponent__Class* get_class() {
            return il2cpp::get_class<app::DisallowMultipleComponent__Class>(type_info, "UnityEngine", "DisallowMultipleComponent");
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
