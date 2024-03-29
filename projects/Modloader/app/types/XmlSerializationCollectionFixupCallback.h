#pragma once
#include <Modloader/app/structs/XmlSerializationCollectionFixupCallback.h>
#include <Modloader/app/structs/XmlSerializationCollectionFixupCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationCollectionFixupCallback {
        inline app::XmlSerializationCollectionFixupCallback__Class** type_info() {
            static app::XmlSerializationCollectionFixupCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationCollectionFixupCallback__Class**)(modloader::win::memory::resolve_rva(0x0472FA80));
            }
            return cache;
        }
        inline app::XmlSerializationCollectionFixupCallback__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationCollectionFixupCallback__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationCollectionFixupCallback");
        }
        inline app::XmlSerializationCollectionFixupCallback* create() {
            return il2cpp::create_object<app::XmlSerializationCollectionFixupCallback>(get_class());
        }
    } // namespace XmlSerializationCollectionFixupCallback
} // namespace app::classes::types
