#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CFString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CFString__Class** type_info;
        inline app::CFString__Class* get_class() {
            return il2cpp::get_class<app::CFString__Class>(type_info, "Mono.Net", "CFString");
        }
        inline app::CFString* create() {
            return il2cpp::create_object<app::CFString>(get_class());
        }
    } // namespace CFString
} // namespace app::classes::types
