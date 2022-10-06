#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyInfo_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyInfo_1__Class** type_info;
        inline app::PropertyInfo_1__Class* get_class() {
            return il2cpp::get_class<app::PropertyInfo_1__Class>(type_info, "System.Reflection", "PropertyInfo");
        }
        inline app::PropertyInfo_1* create() {
            return il2cpp::create_object<app::PropertyInfo_1>(get_class());
        }
        inline app::PropertyInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::PropertyInfo_1__Array>(get_class(), size);
        }
        inline app::PropertyInfo_1__Array* create_array(const std::vector<app::PropertyInfo_1*>& items) {
            return il2cpp::array_new<app::PropertyInfo_1__Array>(get_class(), items);
        }
    } // namespace PropertyInfo_1
} // namespace app::classes::types
