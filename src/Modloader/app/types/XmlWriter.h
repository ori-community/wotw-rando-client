#pragma once
#include <Modloader/app/structs/XmlWriter.h>
#include <Modloader/app/structs/XmlWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlWriter {
        inline app::XmlWriter__Class** type_info() {
            static app::XmlWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlWriter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlWriter__Class>(type_info(), "System.Xml", "XmlWriter");
        }
        inline app::XmlWriter* create() {
            return il2cpp::create_object<app::XmlWriter>(get_class());
        }
    } // namespace XmlWriter
} // namespace app::classes::types
