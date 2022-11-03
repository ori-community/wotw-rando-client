#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlReaderSection {
        namespace {
            inline app::XmlReaderSection__Class* type_info_ref = nullptr;
        }
        inline app::XmlReaderSection__Class** type_info = &type_info_ref;
        inline app::XmlReaderSection__Class* get_class() {
            return il2cpp::get_class<app::XmlReaderSection__Class>(type_info, "System.Xml.XmlConfiguration", "XmlReaderSection");
        }
        inline app::XmlReaderSection* create() {
            return il2cpp::create_object<app::XmlReaderSection>(get_class());
        }
    } // namespace XmlReaderSection
} // namespace app::classes::types
