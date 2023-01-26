#pragma once
#include <Modloader/app/structs/XmlMiscConverter.h>
#include <Modloader/app/structs/XmlMiscConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlMiscConverter {
        inline app::XmlMiscConverter__Class** type_info() {
            static app::XmlMiscConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlMiscConverter__Class**)(modloader::win::memory::resolve_rva(0x0475AE58));
            }
            return cache;
        }
        inline app::XmlMiscConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlMiscConverter__Class>(type_info(), "System.Xml.Schema", "XmlMiscConverter");
        }
        inline app::XmlMiscConverter* create() {
            return il2cpp::create_object<app::XmlMiscConverter>(get_class());
        }
    } // namespace XmlMiscConverter
} // namespace app::classes::types
