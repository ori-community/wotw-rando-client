#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNodeEventHandler {
        namespace {
            inline app::XmlNodeEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::XmlNodeEventHandler__Class** type_info = &type_info_ref;
        inline app::XmlNodeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeEventHandler__Class>(type_info, "System.Xml.Serialization", "XmlNodeEventHandler");
        }
        inline app::XmlNodeEventHandler* create() {
            return il2cpp::create_object<app::XmlNodeEventHandler>(get_class());
        }
    } // namespace XmlNodeEventHandler
} // namespace app::classes::types
