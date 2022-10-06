#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace String {
        extern IL2CPP_MODLOADER_DLLEXPORT app::String__Class** type_info;
        inline app::String__Class* get_class() {
            return il2cpp::get_class<app::String__Class>(type_info, "System", "String");
        }
        inline app::String* create() {
            return il2cpp::create_object<app::String>(get_class());
        }
        inline app::String__Array* create_array(int size) {
            return il2cpp::array_new<app::String__Array>(get_class(), size);
        }
        inline app::String__Array* create_array(const std::vector<app::String*>& items) {
            return il2cpp::array_new<app::String__Array>(get_class(), items);
        }
    } // namespace String
} // namespace app::classes::types
