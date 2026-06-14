#pragma once
#include <Modloader/app/structs/AreaMapIcon.h>
#include <Modloader/app/structs/AreaMapIcon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapIcon {
        inline app::AreaMapIcon__Class** type_info() {
            static app::AreaMapIcon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapIcon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapIcon__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIcon__Class>(type_info(), "", "AreaMapIcon");
        }
        inline app::AreaMapIcon* create() {
            return il2cpp::create_object<app::AreaMapIcon>(get_class());
        }
    } // namespace AreaMapIcon
} // namespace app::classes::types
