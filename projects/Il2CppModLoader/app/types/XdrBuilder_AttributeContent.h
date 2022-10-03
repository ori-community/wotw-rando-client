#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_AttributeContent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder_AttributeContent__Class** type_info;
        inline app::XdrBuilder_AttributeContent__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_AttributeContent__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "AttributeContent");
        }
        inline app::XdrBuilder_AttributeContent* create() {
            return il2cpp::create_object<app::XdrBuilder_AttributeContent>(get_class());
        }
    } // namespace XdrBuilder_AttributeContent
} // namespace app::classes::types
