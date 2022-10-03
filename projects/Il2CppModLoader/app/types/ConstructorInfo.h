#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstructorInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstructorInfo__Class** type_info;
        inline app::ConstructorInfo__Class* get_class() {
            return il2cpp::get_class<app::ConstructorInfo__Class>(type_info, "System.Reflection", "ConstructorInfo");
        }
        inline app::ConstructorInfo* create() {
            return il2cpp::create_object<app::ConstructorInfo>(get_class());
        }
        inline app::ConstructorInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ConstructorInfo__Array>(get_class(), size);
        }
    } // namespace ConstructorInfo
} // namespace app::classes::types
