#pragma once
#include <Modloader/app/structs/XDocument.h>
#include <Modloader/app/structs/XDocument__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XDocument {
        inline app::XDocument__Class** type_info() {
            static app::XDocument__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XDocument__Class**)(modloader::win::memory::resolve_rva(0x0473DB40));
            }
            return cache;
        }
        inline app::XDocument__Class* get_class() {
            return il2cpp::get_class<app::XDocument__Class>(type_info(), "System.Xml.Linq", "XDocument");
        }
        inline app::XDocument* create() {
            return il2cpp::create_object<app::XDocument>(get_class());
        }
    } // namespace XDocument
} // namespace app::classes::types
