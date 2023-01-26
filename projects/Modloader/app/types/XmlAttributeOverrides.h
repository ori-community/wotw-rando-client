#pragma once
#include <Modloader/app/structs/XmlAttributeOverrides.h>
#include <Modloader/app/structs/XmlAttributeOverrides__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAttributeOverrides {
        inline app::XmlAttributeOverrides__Class** type_info() {
            static app::XmlAttributeOverrides__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAttributeOverrides__Class**)(modloader::win::memory::resolve_rva(0x047328F0));
            }
            return cache;
        }
        inline app::XmlAttributeOverrides__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeOverrides__Class>(type_info(), "System.Xml.Serialization", "XmlAttributeOverrides");
        }
        inline app::XmlAttributeOverrides* create() {
            return il2cpp::create_object<app::XmlAttributeOverrides>(get_class());
        }
    } // namespace XmlAttributeOverrides
} // namespace app::classes::types
