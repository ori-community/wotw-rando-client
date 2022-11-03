#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNodeList {
        namespace {
            inline app::XmlNodeList__Class* type_info_ref = nullptr;
        }
        inline app::XmlNodeList__Class** type_info = &type_info_ref;
        inline app::XmlNodeList__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeList__Class>(type_info, "System.Xml", "XmlNodeList");
        }
        inline app::XmlNodeList* create() {
            return il2cpp::create_object<app::XmlNodeList>(get_class());
        }
    } // namespace XmlNodeList
} // namespace app::classes::types
