#pragma once
#include <Modloader/app/structs/IsSceneUnloaded.h>
#include <Modloader/app/structs/IsSceneUnloaded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsSceneUnloaded {
        inline app::IsSceneUnloaded__Class** type_info() {
            static app::IsSceneUnloaded__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsSceneUnloaded__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsSceneUnloaded__Class* get_class() {
            return il2cpp::get_class<app::IsSceneUnloaded__Class>(type_info(), "", "IsSceneUnloaded");
        }
        inline app::IsSceneUnloaded* create() {
            return il2cpp::create_object<app::IsSceneUnloaded>(get_class());
        }
    } // namespace IsSceneUnloaded
} // namespace app::classes::types
