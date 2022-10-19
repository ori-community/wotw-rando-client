#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlMapping {
        namespace {
            inline app::XmlMapping__Class* type_info_ref = nullptr;
        }
        inline app::XmlMapping__Class** type_info = &type_info_ref;
        inline app::XmlMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlMapping__Class>(type_info, "System.Xml.Serialization", "XmlMapping");
        }
        inline app::XmlMapping* create() {
            return il2cpp::create_object<app::XmlMapping>(get_class());
        }
    } // namespace XmlMapping
} // namespace app::classes::types
