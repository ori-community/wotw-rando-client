#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeAsciiDecoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeAsciiDecoder__Class** type_info;
        inline app::SafeAsciiDecoder__Class* get_class() {
            return il2cpp::get_class<app::SafeAsciiDecoder__Class>(type_info, "System.Xml", "SafeAsciiDecoder");
        }
        inline app::SafeAsciiDecoder* create() {
            return il2cpp::create_object<app::SafeAsciiDecoder>(get_class());
        }
    } // namespace SafeAsciiDecoder
} // namespace app::classes::types
