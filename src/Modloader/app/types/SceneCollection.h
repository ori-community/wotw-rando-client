#pragma once
#include <Modloader/app/structs/SceneCollection.h>
#include <Modloader/app/structs/SceneCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneCollection {
        inline app::SceneCollection__Class** type_info() {
            static app::SceneCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneCollection__Class* get_class() {
            return il2cpp::get_class<app::SceneCollection__Class>(type_info(), "", "SceneCollection");
        }
        inline app::SceneCollection* create() {
            return il2cpp::create_object<app::SceneCollection>(get_class());
        }
    } // namespace SceneCollection
} // namespace app::classes::types
