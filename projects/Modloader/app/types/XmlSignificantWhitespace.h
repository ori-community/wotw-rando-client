#pragma once
#include <Modloader/app/structs/XmlSignificantWhitespace.h>
#include <Modloader/app/structs/XmlSignificantWhitespace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSignificantWhitespace {
        inline app::XmlSignificantWhitespace__Class** type_info() {
            static app::XmlSignificantWhitespace__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSignificantWhitespace__Class**)(modloader::win::memory::resolve_rva(0x0476AC38));
            }
            return cache;
        }
        inline app::XmlSignificantWhitespace__Class* get_class() {
            return il2cpp::get_class<app::XmlSignificantWhitespace__Class>(type_info(), "System.Xml", "XmlSignificantWhitespace");
        }
        inline app::XmlSignificantWhitespace* create() {
            return il2cpp::create_object<app::XmlSignificantWhitespace>(get_class());
        }
    } // namespace XmlSignificantWhitespace
} // namespace app::classes::types
