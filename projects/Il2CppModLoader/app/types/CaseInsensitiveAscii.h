#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CaseInsensitiveAscii {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CaseInsensitiveAscii__Class** type_info;
        inline app::CaseInsensitiveAscii__Class* get_class() {
            return il2cpp::get_class<app::CaseInsensitiveAscii__Class>(type_info, "System.Net", "CaseInsensitiveAscii");
        }
        inline app::CaseInsensitiveAscii* create() {
            return il2cpp::create_object<app::CaseInsensitiveAscii>(get_class());
        }
    } // namespace CaseInsensitiveAscii
} // namespace app::classes::types
