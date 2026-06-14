#pragma once
#include <Modloader/app/structs/IgnoreSectionHandler.h>
#include <Modloader/app/structs/IgnoreSectionHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnoreSectionHandler {
        inline app::IgnoreSectionHandler__Class** type_info() {
            static app::IgnoreSectionHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IgnoreSectionHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IgnoreSectionHandler__Class* get_class() {
            return il2cpp::get_class<app::IgnoreSectionHandler__Class>(type_info(), "System.Configuration", "IgnoreSectionHandler");
        }
        inline app::IgnoreSectionHandler* create() {
            return il2cpp::create_object<app::IgnoreSectionHandler>(get_class());
        }
    } // namespace IgnoreSectionHandler
} // namespace app::classes::types
