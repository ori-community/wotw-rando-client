#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexConverter__Class** type_info;
        inline app::RegexConverter__Class* get_class() {
            return il2cpp::get_class<app::RegexConverter__Class>(type_info, "Newtonsoft.Json.Converters", "RegexConverter");
        }
        inline app::RegexConverter* create() {
            return il2cpp::create_object<app::RegexConverter>(get_class());
        }
    } // namespace RegexConverter
} // namespace app::classes::types
