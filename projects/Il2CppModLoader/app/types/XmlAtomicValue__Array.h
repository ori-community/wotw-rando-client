#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAtomicValue__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAtomicValue__Array__Class** type_info;
        inline app::XmlAtomicValue__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlAtomicValue__Array__Class>(type_info, "System.Xml.Schema", "XmlAtomicValue[]");
        }
        inline app::XmlAtomicValue__Array* create() {
            return il2cpp::create_object<app::XmlAtomicValue__Array>(get_class());
        }
    } // namespace XmlAtomicValue__Array
} // namespace app::classes::types
