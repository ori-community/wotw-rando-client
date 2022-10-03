#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlElementWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlElementWrapper__Class** type_info;
        inline app::XmlElementWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlElementWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XmlElementWrapper");
        }
        inline app::XmlElementWrapper* create() {
            return il2cpp::create_object<app::XmlElementWrapper>(get_class());
        }
    } // namespace XmlElementWrapper
} // namespace app::classes::types
