#pragma once
#include <Modloader/app/structs/OriBar.h>
#include <Modloader/app/structs/OriBar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriBar {
        inline app::OriBar__Class** type_info() {
            static app::OriBar__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriBar__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriBar__Class* get_class() {
            return il2cpp::get_class<app::OriBar__Class>(type_info(), "", "OriBar");
        }
        inline app::OriBar* create() {
            return il2cpp::create_object<app::OriBar>(get_class());
        }
    } // namespace OriBar
} // namespace app::classes::types
