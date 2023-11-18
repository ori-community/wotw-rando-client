#pragma once
#include <Modloader/app/structs/XmlEntityReference.h>
#include <Modloader/app/structs/XmlEntityReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlEntityReference {
        inline app::XmlEntityReference__Class** type_info() {
            static app::XmlEntityReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlEntityReference__Class**)(modloader::win::memory::resolve_rva(0x04799928));
            }
            return cache;
        }
        inline app::XmlEntityReference__Class* get_class() {
            return il2cpp::get_class<app::XmlEntityReference__Class>(type_info(), "System.Xml", "XmlEntityReference");
        }
        inline app::XmlEntityReference* create() {
            return il2cpp::create_object<app::XmlEntityReference>(get_class());
        }
    } // namespace XmlEntityReference
} // namespace app::classes::types
