#pragma once
#include <Modloader/app/structs/XmlStringConverter.h>
#include <Modloader/app/structs/XmlStringConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlStringConverter {
        inline app::XmlStringConverter__Class** type_info() {
            static app::XmlStringConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlStringConverter__Class**)(modloader::win::memory::resolve_rva(0x04702D80));
            }
            return cache;
        }
        inline app::XmlStringConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlStringConverter__Class>(type_info(), "System.Xml.Schema", "XmlStringConverter");
        }
        inline app::XmlStringConverter* create() {
            return il2cpp::create_object<app::XmlStringConverter>(get_class());
        }
    } // namespace XmlStringConverter
} // namespace app::classes::types
