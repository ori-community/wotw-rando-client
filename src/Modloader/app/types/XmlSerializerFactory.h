#pragma once
#include <Modloader/app/structs/XmlSerializerFactory.h>
#include <Modloader/app/structs/XmlSerializerFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializerFactory {
        inline app::XmlSerializerFactory__Class** type_info() {
            static app::XmlSerializerFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializerFactory__Class**)(modloader::win::memory::resolve_rva(0x04756DF8));
            }
            return cache;
        }
        inline app::XmlSerializerFactory__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializerFactory__Class>(type_info(), "System.Xml.Serialization", "XmlSerializerFactory");
        }
        inline app::XmlSerializerFactory* create() {
            return il2cpp::create_object<app::XmlSerializerFactory>(get_class());
        }
    } // namespace XmlSerializerFactory
} // namespace app::classes::types
