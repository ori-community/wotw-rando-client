#pragma once
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlResolver {
        inline app::XmlResolver__Class** type_info() {
            static app::XmlResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlResolver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlResolver__Class* get_class() {
            return il2cpp::get_class<app::XmlResolver__Class>(type_info(), "System.Xml", "XmlResolver");
        }
        inline app::XmlResolver* create() {
            return il2cpp::create_object<app::XmlResolver>(get_class());
        }
    } // namespace XmlResolver
} // namespace app::classes::types
