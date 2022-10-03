#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlResolver {
        namespace {
            app::XmlResolver__Class* type_info_ref = nullptr;
        }
        app::XmlResolver__Class** type_info = &type_info_ref;
        inline app::XmlResolver__Class* get_class() {
            return il2cpp::get_class<app::XmlResolver__Class>(type_info, "System.Xml", "XmlResolver");
        }
        inline app::XmlResolver* create() {
            return il2cpp::create_object<app::XmlResolver>(get_class());
        }
    } // namespace XmlResolver
} // namespace app::classes::types
