#pragma once
#include <Modloader/app/structs/XmlReaderSection.h>
#include <Modloader/app/structs/XmlReaderSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlReaderSection {
        inline app::XmlReaderSection__Class** type_info() {
            static app::XmlReaderSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlReaderSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlReaderSection__Class* get_class() {
            return il2cpp::get_class<app::XmlReaderSection__Class>(type_info(), "System.Xml.XmlConfiguration", "XmlReaderSection");
        }
        inline app::XmlReaderSection* create() {
            return il2cpp::create_object<app::XmlReaderSection>(get_class());
        }
    } // namespace XmlReaderSection
} // namespace app::classes::types
