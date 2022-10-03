#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAtomicValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAtomicValue__Class** type_info;
        inline app::XmlAtomicValue__Class* get_class() {
            return il2cpp::get_class<app::XmlAtomicValue__Class>(type_info, "System.Xml.Schema", "XmlAtomicValue");
        }
        inline app::XmlAtomicValue* create() {
            return il2cpp::create_object<app::XmlAtomicValue>(get_class());
        }
        inline app::XmlAtomicValue__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlAtomicValue__Array>(get_class(), size);
        }
    } // namespace XmlAtomicValue
} // namespace app::classes::types
