#pragma once
#include <Modloader/app/structs/XmlSerializationWriterInterpreter.h>
#include <Modloader/app/structs/XmlSerializationWriterInterpreter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationWriterInterpreter {
        inline app::XmlSerializationWriterInterpreter__Class** type_info() {
            static app::XmlSerializationWriterInterpreter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationWriterInterpreter__Class**)(modloader::win::memory::resolve_rva(0x047535B0));
            }
            return cache;
        }
        inline app::XmlSerializationWriterInterpreter__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationWriterInterpreter__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationWriterInterpreter");
        }
        inline app::XmlSerializationWriterInterpreter* create() {
            return il2cpp::create_object<app::XmlSerializationWriterInterpreter>(get_class());
        }
    } // namespace XmlSerializationWriterInterpreter
} // namespace app::classes::types
