#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializer__Class** type_info;
        inline app::XmlSerializer__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializer__Class>(type_info, "System.Xml.Serialization", "XmlSerializer");
        }
        inline app::XmlSerializer* create() {
            return il2cpp::create_object<app::XmlSerializer>(get_class());
        }
        inline app::XmlSerializer__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSerializer__Array>(get_class(), size);
        }
    } // namespace XmlSerializer
} // namespace app::classes::types
