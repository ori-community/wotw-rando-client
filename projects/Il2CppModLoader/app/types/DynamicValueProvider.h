#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicValueProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicValueProvider__Class** type_info;
        inline app::DynamicValueProvider__Class* get_class() {
            return il2cpp::get_class<app::DynamicValueProvider__Class>(type_info, "Newtonsoft.Json.Serialization", "DynamicValueProvider");
        }
        inline app::DynamicValueProvider* create() {
            return il2cpp::create_object<app::DynamicValueProvider>(get_class());
        }
    } // namespace DynamicValueProvider
} // namespace app::classes::types
