#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdAttributeEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdBuilder_XsdAttributeEntry__Class** type_info;
        inline app::XsdBuilder_XsdAttributeEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_XsdAttributeEntry__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "XsdAttributeEntry");
        }
        inline app::XsdBuilder_XsdAttributeEntry* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdAttributeEntry>(get_class());
        }
        inline app::XsdBuilder_XsdAttributeEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::XsdBuilder_XsdAttributeEntry__Array>(get_class(), size);
        }
    } // namespace XsdBuilder_XsdAttributeEntry
} // namespace app::classes::types
