#pragma once
#include <Modloader/app/structs/IsSceneLoaded.h>
#include <Modloader/app/structs/IsSceneLoaded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsSceneLoaded {
        inline app::IsSceneLoaded__Class** type_info() {
            static app::IsSceneLoaded__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsSceneLoaded__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsSceneLoaded__Class* get_class() {
            return il2cpp::get_class<app::IsSceneLoaded__Class>(type_info(), "", "IsSceneLoaded");
        }
        inline app::IsSceneLoaded* create() {
            return il2cpp::create_object<app::IsSceneLoaded>(get_class());
        }
    } // namespace IsSceneLoaded
} // namespace app::classes::types
