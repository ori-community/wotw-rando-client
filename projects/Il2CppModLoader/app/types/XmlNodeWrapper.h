#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNodeWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNodeWrapper__Class** type_info;
        inline app::XmlNodeWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XmlNodeWrapper");
        }
        inline app::XmlNodeWrapper* create() {
            return il2cpp::create_object<app::XmlNodeWrapper>(get_class());
        }
    } // namespace XmlNodeWrapper
} // namespace app::classes::types
