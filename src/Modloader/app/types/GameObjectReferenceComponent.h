#pragma once
#include <Modloader/app/structs/GameObjectReferenceComponent.h>
#include <Modloader/app/structs/GameObjectReferenceComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameObjectReferenceComponent {
        inline app::GameObjectReferenceComponent__Class** type_info() {
            static app::GameObjectReferenceComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameObjectReferenceComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameObjectReferenceComponent__Class* get_class() {
            return il2cpp::get_class<app::GameObjectReferenceComponent__Class>(type_info(), "", "GameObjectReferenceComponent");
        }
        inline app::GameObjectReferenceComponent* create() {
            return il2cpp::create_object<app::GameObjectReferenceComponent>(get_class());
        }
    } // namespace GameObjectReferenceComponent
} // namespace app::classes::types
