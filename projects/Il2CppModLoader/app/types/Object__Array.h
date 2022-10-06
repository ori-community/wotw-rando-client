#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Object__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Object__Array__Class** type_info;
        inline app::Object__Array__Class* get_class() {
            return il2cpp::get_class<app::Object__Array__Class>(type_info, "System", "Object[]");
        }
        inline app::Object__Array* create() {
            return il2cpp::create_object<app::Object__Array>(get_class());
        }
        inline app::Object__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Object__Array__Array>(get_class(), size);
        }
        inline app::Object__Array__Array* create_array(const std::vector<app::Object__Array*>& items) {
            return il2cpp::array_new<app::Object__Array__Array>(get_class(), items);
        }
    } // namespace Object__Array
} // namespace app::classes::types
