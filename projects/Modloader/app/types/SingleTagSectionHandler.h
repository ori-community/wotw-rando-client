#pragma once
#include <Modloader/app/structs/SingleTagSectionHandler.h>
#include <Modloader/app/structs/SingleTagSectionHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SingleTagSectionHandler {
        inline app::SingleTagSectionHandler__Class** type_info() {
            static app::SingleTagSectionHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SingleTagSectionHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SingleTagSectionHandler__Class* get_class() {
            return il2cpp::get_class<app::SingleTagSectionHandler__Class>(type_info(), "System.Configuration", "SingleTagSectionHandler");
        }
        inline app::SingleTagSectionHandler* create() {
            return il2cpp::create_object<app::SingleTagSectionHandler>(get_class());
        }
    } // namespace SingleTagSectionHandler
} // namespace app::classes::types
