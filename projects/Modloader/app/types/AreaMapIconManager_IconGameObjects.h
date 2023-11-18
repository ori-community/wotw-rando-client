#pragma once
#include <Modloader/app/structs/AreaMapIconManager_IconGameObjects.h>
#include <Modloader/app/structs/AreaMapIconManager_IconGameObjects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapIconManager_IconGameObjects {
        inline app::AreaMapIconManager_IconGameObjects__Class** type_info() {
            static app::AreaMapIconManager_IconGameObjects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapIconManager_IconGameObjects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapIconManager_IconGameObjects__Class* get_class() {
            return il2cpp::get_nested_class<app::AreaMapIconManager_IconGameObjects__Class>(type_info(), "", "AreaMapIconManager", "IconGameObjects");
        }
        inline app::AreaMapIconManager_IconGameObjects* create() {
            return il2cpp::create_object<app::AreaMapIconManager_IconGameObjects>(get_class());
        }
    } // namespace AreaMapIconManager_IconGameObjects
} // namespace app::classes::types
