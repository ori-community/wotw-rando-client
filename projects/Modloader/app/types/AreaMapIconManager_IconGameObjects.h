#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AreaMapIconManager_IconGameObjects__Class.h>
#include <Modloader/app/structs/AreaMapIconManager_IconGameObjects.h>

namespace app::classes::types {
    namespace AreaMapIconManager_IconGameObjects {
        namespace {
            inline app::AreaMapIconManager_IconGameObjects__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapIconManager_IconGameObjects__Class** type_info = &type_info_ref;
        inline app::AreaMapIconManager_IconGameObjects__Class* get_class() {
            return il2cpp::get_nested_class<app::AreaMapIconManager_IconGameObjects__Class>(type_info, "", "AreaMapIconManager", "IconGameObjects");
        }
        inline app::AreaMapIconManager_IconGameObjects* create() {
            return il2cpp::create_object<app::AreaMapIconManager_IconGameObjects>(get_class());
        }
    } // namespace AreaMapIconManager_IconGameObjects
} // namespace app::classes::types
