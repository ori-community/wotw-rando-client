#pragma once
#include <Modloader/app/structs/GameObjectActivator.h>
#include <Modloader/app/structs/GameObjectActivator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameObjectActivator {
        inline app::GameObjectActivator__Class** type_info() {
            static app::GameObjectActivator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameObjectActivator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameObjectActivator__Class* get_class() {
            return il2cpp::get_class<app::GameObjectActivator__Class>(type_info(), "", "GameObjectActivator");
        }
        inline app::GameObjectActivator* create() {
            return il2cpp::create_object<app::GameObjectActivator>(get_class());
        }
    } // namespace GameObjectActivator
} // namespace app::classes::types
