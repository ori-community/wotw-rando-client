#pragma once
#include <Modloader/app/structs/XmlNodeReader.h>
#include <Modloader/app/structs/XmlNodeReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeReader {
        inline app::XmlNodeReader__Class** type_info() {
            static app::XmlNodeReader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlNodeReader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlNodeReader__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeReader__Class>(type_info(), "System.Xml", "XmlNodeReader");
        }
        inline app::XmlNodeReader* create() {
            return il2cpp::create_object<app::XmlNodeReader>(get_class());
        }
    } // namespace XmlNodeReader
} // namespace app::classes::types
