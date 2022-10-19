#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlCharType {
        inline app::XmlCharType__Class** type_info = (app::XmlCharType__Class**)(modloader::win::memory::resolve_rva(0x04702230));
        inline app::XmlCharType__Class* get_class() {
            return il2cpp::get_class<app::XmlCharType__Class>(type_info, "System.Xml", "XmlCharType");
        }
        inline app::XmlCharType* create() {
            return il2cpp::create_object<app::XmlCharType>(get_class());
        }
        inline app::XmlCharType__Boxed* box(app::XmlCharType value) {
            return il2cpp::box_value<app::XmlCharType__Boxed>(get_class(), value);
        }
    } // namespace XmlCharType
} // namespace app::classes::types
