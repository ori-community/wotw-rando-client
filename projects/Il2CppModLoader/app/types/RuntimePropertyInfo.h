#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimePropertyInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimePropertyInfo__Class** type_info;
        inline app::RuntimePropertyInfo__Class* get_class() {
            return il2cpp::get_class<app::RuntimePropertyInfo__Class>(type_info, "System.Reflection", "RuntimePropertyInfo");
        }
        inline app::RuntimePropertyInfo* create() {
            return il2cpp::create_object<app::RuntimePropertyInfo>(get_class());
        }
        inline app::RuntimePropertyInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimePropertyInfo__Array>(get_class(), size);
        }
        inline app::RuntimePropertyInfo__Array* create_array(const std::vector<app::RuntimePropertyInfo*>& items) {
            return il2cpp::array_new<app::RuntimePropertyInfo__Array>(get_class(), items);
        }
    } // namespace RuntimePropertyInfo
} // namespace app::classes::types
