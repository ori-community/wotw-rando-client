#pragma once
#include <Modloader/app/structs/XmlCharType.h>
#include <Modloader/app/structs/XmlCharType__Boxed.h>
#include <Modloader/app/structs/XmlCharType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlCharType {
        inline app::XmlCharType__Class** type_info() {
            static app::XmlCharType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlCharType__Class**)(modloader::win::memory::resolve_rva(0x04702230));
            }
            return cache;
        }
        inline app::XmlCharType__Class* get_class() {
            return il2cpp::get_class<app::XmlCharType__Class>(type_info(), "System.Xml", "XmlCharType");
        }
        inline app::XmlCharType* create() {
            return il2cpp::create_object<app::XmlCharType>(get_class());
        }
        inline app::XmlCharType__Boxed* box(app::XmlCharType value) {
            return il2cpp::box_value<app::XmlCharType__Boxed>(get_class(), value);
        }
    } // namespace XmlCharType
} // namespace app::classes::types
