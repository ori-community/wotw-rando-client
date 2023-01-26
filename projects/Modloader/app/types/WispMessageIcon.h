#pragma once
#include <Modloader/app/structs/WispMessageIcon.h>
#include <Modloader/app/structs/WispMessageIcon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WispMessageIcon {
        inline app::WispMessageIcon__Class** type_info() {
            static app::WispMessageIcon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WispMessageIcon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WispMessageIcon__Class* get_class() {
            return il2cpp::get_class<app::WispMessageIcon__Class>(type_info(), "", "WispMessageIcon");
        }
        inline app::WispMessageIcon* create() {
            return il2cpp::create_object<app::WispMessageIcon>(get_class());
        }
    } // namespace WispMessageIcon
} // namespace app::classes::types
