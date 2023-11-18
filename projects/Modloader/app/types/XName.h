#pragma once
#include <Modloader/app/structs/XName.h>
#include <Modloader/app/structs/XName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XName {
        inline app::XName__Class** type_info() {
            static app::XName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XName__Class**)(modloader::win::memory::resolve_rva(0x04775B78));
            }
            return cache;
        }
        inline app::XName__Class* get_class() {
            return il2cpp::get_class<app::XName__Class>(type_info(), "System.Xml.Linq", "XName");
        }
        inline app::XName* create() {
            return il2cpp::create_object<app::XName>(get_class());
        }
    } // namespace XName
} // namespace app::classes::types
