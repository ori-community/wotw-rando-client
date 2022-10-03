#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAtomicValue_Union {
        namespace {
            app::XmlAtomicValue_Union__Class* type_info_ref = nullptr;
        }
        app::XmlAtomicValue_Union__Class** type_info = &type_info_ref;
        inline app::XmlAtomicValue_Union__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlAtomicValue_Union__Class>(type_info, "System.Xml.Schema", "XmlAtomicValue", "Union");
        }
        inline app::XmlAtomicValue_Union* create() {
            return il2cpp::create_object<app::XmlAtomicValue_Union>(get_class());
        }
        inline app::XmlAtomicValue_Union__Boxed* box(app::XmlAtomicValue_Union value) {
            return il2cpp::box_value<app::XmlAtomicValue_Union__Boxed>(get_class(), value);
        }
    } // namespace XmlAtomicValue_Union
} // namespace app::classes::types
