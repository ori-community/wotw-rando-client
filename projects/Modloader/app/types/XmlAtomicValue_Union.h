#pragma once
#include <Modloader/app/structs/XmlAtomicValue_Union.h>
#include <Modloader/app/structs/XmlAtomicValue_Union__Boxed.h>
#include <Modloader/app/structs/XmlAtomicValue_Union__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAtomicValue_Union {
        inline app::XmlAtomicValue_Union__Class** type_info() {
            static app::XmlAtomicValue_Union__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlAtomicValue_Union__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlAtomicValue_Union__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlAtomicValue_Union__Class>(type_info(), "System.Xml.Schema", "XmlAtomicValue", "Union");
        }
        inline app::XmlAtomicValue_Union* create() {
            return il2cpp::create_object<app::XmlAtomicValue_Union>(get_class());
        }
        inline app::XmlAtomicValue_Union__Boxed* box(app::XmlAtomicValue_Union value) {
            return il2cpp::box_value<app::XmlAtomicValue_Union__Boxed>(get_class(), value);
        }
    } // namespace XmlAtomicValue_Union
} // namespace app::classes::types
