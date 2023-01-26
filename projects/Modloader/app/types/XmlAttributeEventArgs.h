#pragma once
#include <Modloader/app/structs/XmlAttributeEventArgs.h>
#include <Modloader/app/structs/XmlAttributeEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAttributeEventArgs {
        inline app::XmlAttributeEventArgs__Class** type_info() {
            static app::XmlAttributeEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAttributeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04709920));
            }
            return cache;
        }
        inline app::XmlAttributeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeEventArgs__Class>(type_info(), "System.Xml.Serialization", "XmlAttributeEventArgs");
        }
        inline app::XmlAttributeEventArgs* create() {
            return il2cpp::create_object<app::XmlAttributeEventArgs>(get_class());
        }
    } // namespace XmlAttributeEventArgs
} // namespace app::classes::types
