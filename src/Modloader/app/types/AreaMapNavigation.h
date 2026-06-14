#pragma once
#include <Modloader/app/structs/AreaMapNavigation.h>
#include <Modloader/app/structs/AreaMapNavigation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapNavigation {
        inline app::AreaMapNavigation__Class** type_info() {
            static app::AreaMapNavigation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapNavigation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapNavigation__Class* get_class() {
            return il2cpp::get_class<app::AreaMapNavigation__Class>(type_info(), "", "AreaMapNavigation");
        }
        inline app::AreaMapNavigation* create() {
            return il2cpp::create_object<app::AreaMapNavigation>(get_class());
        }
    } // namespace AreaMapNavigation
} // namespace app::classes::types
