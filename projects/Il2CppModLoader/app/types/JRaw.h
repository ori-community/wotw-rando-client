#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JRaw {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JRaw__Class** type_info;
        inline app::JRaw__Class* get_class() {
            return il2cpp::get_class<app::JRaw__Class>(type_info, "Newtonsoft.Json.Linq", "JRaw");
        }
        inline app::JRaw* create() {
            return il2cpp::create_object<app::JRaw>(get_class());
        }
    } // namespace JRaw
} // namespace app::classes::types
