#pragma once
#include <Modloader/app/structs/XmlValueGetter.h>
#include <Modloader/app/structs/XmlValueGetter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlValueGetter {
        inline app::XmlValueGetter__Class** type_info() {
            static app::XmlValueGetter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlValueGetter__Class**)(modloader::win::memory::resolve_rva(0x0477D540));
            }
            return cache;
        }
        inline app::XmlValueGetter__Class* get_class() {
            return il2cpp::get_class<app::XmlValueGetter__Class>(type_info(), "System.Xml.Schema", "XmlValueGetter");
        }
        inline app::XmlValueGetter* create() {
            return il2cpp::create_object<app::XmlValueGetter>(get_class());
        }
    } // namespace XmlValueGetter
} // namespace app::classes::types
