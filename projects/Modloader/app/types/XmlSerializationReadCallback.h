#pragma once
#include <Modloader/app/structs/XmlSerializationReadCallback.h>
#include <Modloader/app/structs/XmlSerializationReadCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReadCallback {
        inline app::XmlSerializationReadCallback__Class** type_info() {
            static app::XmlSerializationReadCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationReadCallback__Class**)(modloader::win::memory::resolve_rva(0x0474CC38));
            }
            return cache;
        }
        inline app::XmlSerializationReadCallback__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationReadCallback__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationReadCallback");
        }
        inline app::XmlSerializationReadCallback* create() {
            return il2cpp::create_object<app::XmlSerializationReadCallback>(get_class());
        }
    } // namespace XmlSerializationReadCallback
} // namespace app::classes::types
