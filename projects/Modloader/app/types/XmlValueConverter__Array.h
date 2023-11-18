#pragma once
#include <Modloader/app/structs/XmlValueConverter__Array.h>
#include <Modloader/app/structs/XmlValueConverter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlValueConverter__Array {
        inline app::XmlValueConverter__Array__Class** type_info() {
            static app::XmlValueConverter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlValueConverter__Array__Class**)(modloader::win::memory::resolve_rva(0x0476D5B0));
            }
            return cache;
        }
        inline app::XmlValueConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlValueConverter__Array__Class>(type_info(), "System.Xml.Schema", "XmlValueConverter[]");
        }
        inline app::XmlValueConverter__Array* create() {
            return il2cpp::create_object<app::XmlValueConverter__Array>(get_class());
        }
    } // namespace XmlValueConverter__Array
} // namespace app::classes::types
