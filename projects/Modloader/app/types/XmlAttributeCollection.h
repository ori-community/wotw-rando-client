#pragma once
#include <Modloader/app/structs/XmlAttributeCollection.h>
#include <Modloader/app/structs/XmlAttributeCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAttributeCollection {
        inline app::XmlAttributeCollection__Class** type_info() {
            static app::XmlAttributeCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAttributeCollection__Class**)(modloader::win::memory::resolve_rva(0x047815B8));
            }
            return cache;
        }
        inline app::XmlAttributeCollection__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeCollection__Class>(type_info(), "System.Xml", "XmlAttributeCollection");
        }
        inline app::XmlAttributeCollection* create() {
            return il2cpp::create_object<app::XmlAttributeCollection>(get_class());
        }
    } // namespace XmlAttributeCollection
} // namespace app::classes::types
