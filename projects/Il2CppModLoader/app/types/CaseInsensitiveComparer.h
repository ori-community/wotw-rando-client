#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CaseInsensitiveComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CaseInsensitiveComparer__Class** type_info;
        inline app::CaseInsensitiveComparer__Class* get_class() {
            return il2cpp::get_class<app::CaseInsensitiveComparer__Class>(type_info, "System.Collections", "CaseInsensitiveComparer");
        }
        inline app::CaseInsensitiveComparer* create() {
            return il2cpp::create_object<app::CaseInsensitiveComparer>(get_class());
        }
    } // namespace CaseInsensitiveComparer
} // namespace app::classes::types
