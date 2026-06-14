#pragma once
#include <Modloader/app/structs/SceneLoadingEntity.h>
#include <Modloader/app/structs/SceneLoadingEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingEntity {
        inline app::SceneLoadingEntity__Class** type_info() {
            static app::SceneLoadingEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneLoadingEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneLoadingEntity__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingEntity__Class>(type_info(), "Moon.Timeline", "SceneLoadingEntity");
        }
        inline app::SceneLoadingEntity* create() {
            return il2cpp::create_object<app::SceneLoadingEntity>(get_class());
        }
    } // namespace SceneLoadingEntity
} // namespace app::classes::types
