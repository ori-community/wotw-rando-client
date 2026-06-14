#pragma once
#include <Modloader/app/structs/XmlWellFormedWriter.h>
#include <Modloader/app/structs/XmlWellFormedWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter {
        inline app::XmlWellFormedWriter__Class** type_info() {
            static app::XmlWellFormedWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlWellFormedWriter__Class**)(modloader::win::memory::resolve_rva(0x04745358));
            }
            return cache;
        }
        inline app::XmlWellFormedWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlWellFormedWriter__Class>(type_info(), "System.Xml", "XmlWellFormedWriter");
        }
        inline app::XmlWellFormedWriter* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter>(get_class());
        }
    } // namespace XmlWellFormedWriter
} // namespace app::classes::types
