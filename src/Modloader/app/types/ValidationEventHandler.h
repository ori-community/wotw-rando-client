#pragma once
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/ValidationEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidationEventHandler {
        inline app::ValidationEventHandler__Class** type_info() {
            static app::ValidationEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidationEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047892B8));
            }
            return cache;
        }
        inline app::ValidationEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ValidationEventHandler__Class>(type_info(), "System.Xml.Schema", "ValidationEventHandler");
        }
        inline app::ValidationEventHandler* create() {
            return il2cpp::create_object<app::ValidationEventHandler>(get_class());
        }
    } // namespace ValidationEventHandler
} // namespace app::classes::types
