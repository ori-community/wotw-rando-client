#pragma once
#include <Modloader/app/structs/ActiveAxis.h>
#include <Modloader/app/structs/ActiveAxis__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActiveAxis {
        inline app::ActiveAxis__Class** type_info() {
            static app::ActiveAxis__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActiveAxis__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActiveAxis__Class* get_class() {
            return il2cpp::get_class<app::ActiveAxis__Class>(type_info(), "System.Xml.Schema", "ActiveAxis");
        }
        inline app::ActiveAxis* create() {
            return il2cpp::create_object<app::ActiveAxis>(get_class());
        }
    } // namespace ActiveAxis
} // namespace app::classes::types
