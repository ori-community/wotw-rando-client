#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameObjectReferenceComponent__Class.h>
#include <Modloader/app/structs/GameObjectReferenceComponent.h>

namespace app::classes::types {
    namespace GameObjectReferenceComponent {
        namespace {
            inline app::GameObjectReferenceComponent__Class* type_info_ref = nullptr;
        }
        inline app::GameObjectReferenceComponent__Class** type_info = &type_info_ref;
        inline app::GameObjectReferenceComponent__Class* get_class() {
            return il2cpp::get_class<app::GameObjectReferenceComponent__Class>(type_info, "", "GameObjectReferenceComponent");
        }
        inline app::GameObjectReferenceComponent* create() {
            return il2cpp::create_object<app::GameObjectReferenceComponent>(get_class());
        }
    } // namespace GameObjectReferenceComponent
} // namespace app::classes::types
