#pragma once
#include <Modloader/app/structs/XmlUnspecifiedAttribute.h>
#include <Modloader/app/structs/XmlUnspecifiedAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlUnspecifiedAttribute {
        inline app::XmlUnspecifiedAttribute__Class** type_info() {
            static app::XmlUnspecifiedAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlUnspecifiedAttribute__Class**)(modloader::win::memory::resolve_rva(0x047374E0));
            }
            return cache;
        }
        inline app::XmlUnspecifiedAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlUnspecifiedAttribute__Class>(type_info(), "System.Xml", "XmlUnspecifiedAttribute");
        }
        inline app::XmlUnspecifiedAttribute* create() {
            return il2cpp::create_object<app::XmlUnspecifiedAttribute>(get_class());
        }
    } // namespace XmlUnspecifiedAttribute
} // namespace app::classes::types
