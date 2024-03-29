#pragma once
#include <Modloader/app/structs/XmlException.h>
#include <Modloader/app/structs/XmlException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlException {
        inline app::XmlException__Class** type_info() {
            static app::XmlException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlException__Class**)(modloader::win::memory::resolve_rva(0x047513E8));
            }
            return cache;
        }
        inline app::XmlException__Class* get_class() {
            return il2cpp::get_class<app::XmlException__Class>(type_info(), "System.Xml", "XmlException");
        }
        inline app::XmlException* create() {
            return il2cpp::create_object<app::XmlException>(get_class());
        }
    } // namespace XmlException
} // namespace app::classes::types
