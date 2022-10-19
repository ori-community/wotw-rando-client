#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vector3 {
        inline app::Vector3__Class** type_info = (app::Vector3__Class**)(modloader::win::memory::resolve_rva(0x04774AC8));
        inline app::Vector3__Class* get_class() {
            return il2cpp::get_class<app::Vector3__Class>(type_info, "UnityEngine", "Vector3");
        }
        inline app::Vector3* create() {
            return il2cpp::create_object<app::Vector3>(get_class());
        }
        inline app::Vector3__Boxed* box(app::Vector3 value) {
            return il2cpp::box_value<app::Vector3__Boxed>(get_class(), value);
        }
        inline app::Vector3__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector3__Array>(get_class(), size);
        }
        inline app::Vector3__Array* create_array(const std::vector<app::Vector3>& items) {
            return il2cpp::array_new<app::Vector3__Array>(get_class(), items);
        }
    } // namespace Vector3
} // namespace app::classes::types
