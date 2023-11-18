#pragma once
#include <Modloader/app/structs/XmlSerializationWriteCallback.h>
#include <Modloader/app/structs/XmlSerializationWriteCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationWriteCallback {
        inline app::XmlSerializationWriteCallback__Class** type_info() {
            static app::XmlSerializationWriteCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationWriteCallback__Class**)(modloader::win::memory::resolve_rva(0x047815A8));
            }
            return cache;
        }
        inline app::XmlSerializationWriteCallback__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationWriteCallback__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationWriteCallback");
        }
        inline app::XmlSerializationWriteCallback* create() {
            return il2cpp::create_object<app::XmlSerializationWriteCallback>(get_class());
        }
    } // namespace XmlSerializationWriteCallback
} // namespace app::classes::types
