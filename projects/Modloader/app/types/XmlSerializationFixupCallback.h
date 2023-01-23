#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSerializationFixupCallback__Class.h>
#include <Modloader/app/structs/XmlSerializationFixupCallback.h>

namespace app::classes::types {
    namespace XmlSerializationFixupCallback {
        inline app::XmlSerializationFixupCallback__Class** type_info = (app::XmlSerializationFixupCallback__Class**)(modloader::win::memory::resolve_rva(0x04759238));
        inline app::XmlSerializationFixupCallback__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationFixupCallback__Class>(type_info, "System.Xml.Serialization", "XmlSerializationFixupCallback");
        }
        inline app::XmlSerializationFixupCallback* create() {
            return il2cpp::create_object<app::XmlSerializationFixupCallback>(get_class());
        }
    } // namespace XmlSerializationFixupCallback
} // namespace app::classes::types
