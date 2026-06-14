#pragma once
#include <Modloader/app/structs/XmlWhitespace.h>
#include <Modloader/app/structs/XmlWhitespace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlWhitespace {
        inline app::XmlWhitespace__Class** type_info() {
            static app::XmlWhitespace__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlWhitespace__Class**)(modloader::win::memory::resolve_rva(0x04767058));
            }
            return cache;
        }
        inline app::XmlWhitespace__Class* get_class() {
            return il2cpp::get_class<app::XmlWhitespace__Class>(type_info(), "System.Xml", "XmlWhitespace");
        }
        inline app::XmlWhitespace* create() {
            return il2cpp::create_object<app::XmlWhitespace>(get_class());
        }
    } // namespace XmlWhitespace
} // namespace app::classes::types
