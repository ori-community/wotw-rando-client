#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeFieldInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeFieldInfo__Class** type_info;
        inline app::RuntimeFieldInfo__Class* get_class() {
            return il2cpp::get_class<app::RuntimeFieldInfo__Class>(type_info, "System.Reflection", "RuntimeFieldInfo");
        }
        inline app::RuntimeFieldInfo* create() {
            return il2cpp::create_object<app::RuntimeFieldInfo>(get_class());
        }
        inline app::RuntimeFieldInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeFieldInfo__Array>(get_class(), size);
        }
        inline app::RuntimeFieldInfo__Array* create_array(const std::vector<app::RuntimeFieldInfo*>& items) {
            return il2cpp::array_new<app::RuntimeFieldInfo__Array>(get_class(), items);
        }
    } // namespace RuntimeFieldInfo
} // namespace app::classes::types
