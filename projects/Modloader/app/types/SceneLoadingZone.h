#pragma once
#include <Modloader/app/structs/SceneLoadingZone.h>
#include <Modloader/app/structs/SceneLoadingZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingZone {
        inline app::SceneLoadingZone__Class** type_info() {
            static app::SceneLoadingZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneLoadingZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneLoadingZone__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingZone__Class>(type_info(), "", "SceneLoadingZone");
        }
        inline app::SceneLoadingZone* create() {
            return il2cpp::create_object<app::SceneLoadingZone>(get_class());
        }
    } // namespace SceneLoadingZone
} // namespace app::classes::types
