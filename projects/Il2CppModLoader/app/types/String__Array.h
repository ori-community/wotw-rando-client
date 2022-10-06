#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace String__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::String__Array__Class** type_info;
        inline app::String__Array__Class* get_class() {
            return il2cpp::get_class<app::String__Array__Class>(type_info, "System", "String[]");
        }
        inline app::String__Array* create() {
            return il2cpp::create_object<app::String__Array>(get_class());
        }
        inline app::String__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::String__Array__Array>(get_class(), size);
        }
        inline app::String__Array__Array* create_array(const std::vector<app::String__Array*>& items) {
            return il2cpp::array_new<app::String__Array__Array>(get_class(), items);
        }
    } // namespace String__Array
} // namespace app::classes::types
