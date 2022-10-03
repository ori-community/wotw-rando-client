#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StringComparer__Class** type_info;
        inline app::StringComparer__Class* get_class() {
            return il2cpp::get_class<app::StringComparer__Class>(type_info, "System", "StringComparer");
        }
        inline app::StringComparer* create() {
            return il2cpp::create_object<app::StringComparer>(get_class());
        }
    } // namespace StringComparer
} // namespace app::classes::types
