#pragma once
#include <Modloader/app/structs/AreaMapIconManager.h>
#include <Modloader/app/structs/AreaMapIconManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapIconManager {
        inline app::AreaMapIconManager__Class** type_info() {
            static app::AreaMapIconManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapIconManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapIconManager__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIconManager__Class>(type_info(), "", "AreaMapIconManager");
        }
        inline app::AreaMapIconManager* create() {
            return il2cpp::create_object<app::AreaMapIconManager>(get_class());
        }
    } // namespace AreaMapIconManager
} // namespace app::classes::types
