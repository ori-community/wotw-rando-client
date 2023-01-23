#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlElementEventHandler__Class.h>
#include <Modloader/app/structs/XmlElementEventHandler.h>

namespace app::classes::types {
    namespace XmlElementEventHandler {
        namespace {
            inline app::XmlElementEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::XmlElementEventHandler__Class** type_info = &type_info_ref;
        inline app::XmlElementEventHandler__Class* get_class() {
            return il2cpp::get_class<app::XmlElementEventHandler__Class>(type_info, "System.Xml.Serialization", "XmlElementEventHandler");
        }
        inline app::XmlElementEventHandler* create() {
            return il2cpp::create_object<app::XmlElementEventHandler>(get_class());
        }
    } // namespace XmlElementEventHandler
} // namespace app::classes::types
