#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CultureInfoConverter_CultureComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CultureInfoConverter_CultureComparer__Class** type_info;
        inline app::CultureInfoConverter_CultureComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::CultureInfoConverter_CultureComparer__Class>(type_info, "System.ComponentModel", "CultureInfoConverter", "CultureComparer");
        }
        inline app::CultureInfoConverter_CultureComparer* create() {
            return il2cpp::create_object<app::CultureInfoConverter_CultureComparer>(get_class());
        }
    } // namespace CultureInfoConverter_CultureComparer
} // namespace app::classes::types
