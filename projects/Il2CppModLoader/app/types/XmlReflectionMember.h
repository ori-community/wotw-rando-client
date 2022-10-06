#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlReflectionMember {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlReflectionMember__Class** type_info;
        inline app::XmlReflectionMember__Class* get_class() {
            return il2cpp::get_class<app::XmlReflectionMember__Class>(type_info, "System.Xml.Serialization", "XmlReflectionMember");
        }
        inline app::XmlReflectionMember* create() {
            return il2cpp::create_object<app::XmlReflectionMember>(get_class());
        }
        inline app::XmlReflectionMember__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlReflectionMember__Array>(get_class(), size);
        }
        inline app::XmlReflectionMember__Array* create_array(const std::vector<app::XmlReflectionMember*>& items) {
            return il2cpp::array_new<app::XmlReflectionMember__Array>(get_class(), items);
        }
    } // namespace XmlReflectionMember
} // namespace app::classes::types
