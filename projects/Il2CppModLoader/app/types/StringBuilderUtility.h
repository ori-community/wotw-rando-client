#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringBuilderUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StringBuilderUtility__Class** type_info;
        inline app::StringBuilderUtility__Class* get_class() {
            return il2cpp::get_class<app::StringBuilderUtility__Class>(type_info, "CatlikeCoding.Utilities", "StringBuilderUtility");
        }
        inline app::StringBuilderUtility* create() {
            return il2cpp::create_object<app::StringBuilderUtility>(get_class());
        }
    } // namespace StringBuilderUtility
} // namespace app::classes::types
