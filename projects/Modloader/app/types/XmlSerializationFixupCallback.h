#pragma once
#include <Modloader/app/structs/XmlSerializationFixupCallback.h>
#include <Modloader/app/structs/XmlSerializationFixupCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationFixupCallback {
        inline app::XmlSerializationFixupCallback__Class** type_info() {
            static app::XmlSerializationFixupCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationFixupCallback__Class**)(modloader::win::memory::resolve_rva(0x04759238));
            }
            return cache;
        }
        inline app::XmlSerializationFixupCallback__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationFixupCallback__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationFixupCallback");
        }
        inline app::XmlSerializationFixupCallback* create() {
            return il2cpp::create_object<app::XmlSerializationFixupCallback>(get_class());
        }
    } // namespace XmlSerializationFixupCallback
} // namespace app::classes::types
