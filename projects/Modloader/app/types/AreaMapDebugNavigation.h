#pragma once
#include <Modloader/app/structs/AreaMapDebugNavigation.h>
#include <Modloader/app/structs/AreaMapDebugNavigation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapDebugNavigation {
        inline app::AreaMapDebugNavigation__Class** type_info() {
            static app::AreaMapDebugNavigation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapDebugNavigation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapDebugNavigation__Class* get_class() {
            return il2cpp::get_class<app::AreaMapDebugNavigation__Class>(type_info(), "", "AreaMapDebugNavigation");
        }
        inline app::AreaMapDebugNavigation* create() {
            return il2cpp::create_object<app::AreaMapDebugNavigation>(get_class());
        }
    } // namespace AreaMapDebugNavigation
} // namespace app::classes::types
