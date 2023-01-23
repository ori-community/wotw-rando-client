#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlAttributeEventHandler__Class.h>
#include <Modloader/app/structs/XmlAttributeEventHandler.h>

namespace app::classes::types {
    namespace XmlAttributeEventHandler {
        namespace {
            inline app::XmlAttributeEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::XmlAttributeEventHandler__Class** type_info = &type_info_ref;
        inline app::XmlAttributeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeEventHandler__Class>(type_info, "System.Xml.Serialization", "XmlAttributeEventHandler");
        }
        inline app::XmlAttributeEventHandler* create() {
            return il2cpp::create_object<app::XmlAttributeEventHandler>(get_class());
        }
    } // namespace XmlAttributeEventHandler
} // namespace app::classes::types
