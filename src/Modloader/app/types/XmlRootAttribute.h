#pragma once
#include <Modloader/app/structs/XmlRootAttribute.h>
#include <Modloader/app/structs/XmlRootAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlRootAttribute {
        inline app::XmlRootAttribute__Class** type_info() {
            static app::XmlRootAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlRootAttribute__Class**)(modloader::win::memory::resolve_rva(0x0475AE50));
            }
            return cache;
        }
        inline app::XmlRootAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlRootAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlRootAttribute");
        }
        inline app::XmlRootAttribute* create() {
            return il2cpp::create_object<app::XmlRootAttribute>(get_class());
        }
    } // namespace XmlRootAttribute
} // namespace app::classes::types
