#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Single__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Single__Array__Class** type_info;
        inline app::Single__Array__Class* get_class() {
            return il2cpp::get_class<app::Single__Array__Class>(type_info, "System", "Single[]");
        }
        inline app::Single__Array* create() {
            return il2cpp::create_object<app::Single__Array>(get_class());
        }
        inline app::Single__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Single__Array__Array>(get_class(), size);
        }
        inline app::Single__Array__Array* create_array(const std::vector<app::Single__Array*>& items) {
            return il2cpp::array_new<app::Single__Array__Array>(get_class(), items);
        }
    } // namespace Single__Array
} // namespace app::classes::types
