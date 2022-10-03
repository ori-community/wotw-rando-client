#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Regex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Regex__Class** type_info;
        inline app::Regex__Class* get_class() {
            return il2cpp::get_class<app::Regex__Class>(type_info, "System.Text.RegularExpressions", "Regex");
        }
        inline app::Regex* create() {
            return il2cpp::create_object<app::Regex>(get_class());
        }
        inline app::Regex__Array* create_array(int size) {
            return il2cpp::array_new<app::Regex__Array>(get_class(), size);
        }
    } // namespace Regex
} // namespace app::classes::types
