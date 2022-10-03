#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectReader_TypeNAssembly {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectReader_TypeNAssembly__Class** type_info;
        inline app::ObjectReader_TypeNAssembly__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectReader_TypeNAssembly__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader", "TypeNAssembly");
        }
        inline app::ObjectReader_TypeNAssembly* create() {
            return il2cpp::create_object<app::ObjectReader_TypeNAssembly>(get_class());
        }
    } // namespace ObjectReader_TypeNAssembly
} // namespace app::classes::types
