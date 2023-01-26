#pragma once
#include <Modloader/app/structs/SceneNavigationInfo.h>
#include <Modloader/app/structs/SceneNavigationInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneNavigationInfo {
        inline app::SceneNavigationInfo__Class** type_info() {
            static app::SceneNavigationInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneNavigationInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneNavigationInfo__Class* get_class() {
            return il2cpp::get_class<app::SceneNavigationInfo__Class>(type_info(), "", "SceneNavigationInfo");
        }
        inline app::SceneNavigationInfo* create() {
            return il2cpp::create_object<app::SceneNavigationInfo>(get_class());
        }
    } // namespace SceneNavigationInfo
} // namespace app::classes::types
