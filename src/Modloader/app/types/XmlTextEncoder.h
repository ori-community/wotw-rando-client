#pragma once
#include <Modloader/app/structs/XmlTextEncoder.h>
#include <Modloader/app/structs/XmlTextEncoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextEncoder {
        inline app::XmlTextEncoder__Class** type_info() {
            static app::XmlTextEncoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTextEncoder__Class**)(modloader::win::memory::resolve_rva(0x04763228));
            }
            return cache;
        }
        inline app::XmlTextEncoder__Class* get_class() {
            return il2cpp::get_class<app::XmlTextEncoder__Class>(type_info(), "System.Xml", "XmlTextEncoder");
        }
        inline app::XmlTextEncoder* create() {
            return il2cpp::create_object<app::XmlTextEncoder>(get_class());
        }
    } // namespace XmlTextEncoder
} // namespace app::classes::types
