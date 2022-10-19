#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlReflectionMember__Array {
        namespace {
            inline app::XmlReflectionMember__Array__Class* type_info_ref = nullptr;
        }
        inline app::XmlReflectionMember__Array__Class** type_info = &type_info_ref;
        inline app::XmlReflectionMember__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlReflectionMember__Array__Class>(type_info, "System.Xml.Serialization", "XmlReflectionMember[]");
        }
        inline app::XmlReflectionMember__Array* create() {
            return il2cpp::create_object<app::XmlReflectionMember__Array>(get_class());
        }
    } // namespace XmlReflectionMember__Array
} // namespace app::classes::types
