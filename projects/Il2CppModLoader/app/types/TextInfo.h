#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextInfo__Class** type_info;
        inline app::TextInfo__Class* get_class() {
            return il2cpp::get_class<app::TextInfo__Class>(type_info, "System.Globalization", "TextInfo");
        }
        inline app::TextInfo* create() {
            return il2cpp::create_object<app::TextInfo>(get_class());
        }
    } // namespace TextInfo
} // namespace app::classes::types
