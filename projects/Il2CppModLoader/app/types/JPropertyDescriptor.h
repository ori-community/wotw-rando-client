#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JPropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JPropertyDescriptor__Class** type_info;
        inline app::JPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::JPropertyDescriptor__Class>(type_info, "Newtonsoft.Json.Linq", "JPropertyDescriptor");
        }
        inline app::JPropertyDescriptor* create() {
            return il2cpp::create_object<app::JPropertyDescriptor>(get_class());
        }
    } // namespace JPropertyDescriptor
} // namespace app::classes::types
