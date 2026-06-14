#pragma once
#include <Modloader/app/structs/XmlSerializationReaderInterpreter.h>
#include <Modloader/app/structs/XmlSerializationReaderInterpreter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReaderInterpreter {
        inline app::XmlSerializationReaderInterpreter__Class** type_info() {
            static app::XmlSerializationReaderInterpreter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationReaderInterpreter__Class**)(modloader::win::memory::resolve_rva(0x047363E0));
            }
            return cache;
        }
        inline app::XmlSerializationReaderInterpreter__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationReaderInterpreter__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationReaderInterpreter");
        }
        inline app::XmlSerializationReaderInterpreter* create() {
            return il2cpp::create_object<app::XmlSerializationReaderInterpreter>(get_class());
        }
    } // namespace XmlSerializationReaderInterpreter
} // namespace app::classes::types
