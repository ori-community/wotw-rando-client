#pragma once
#include <Modloader/app/structs/SceneEntity.h>
#include <Modloader/app/structs/SceneEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneEntity {
        inline app::SceneEntity__Class** type_info() {
            static app::SceneEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneEntity__Class* get_class() {
            return il2cpp::get_class<app::SceneEntity__Class>(type_info(), "Moon.Timeline", "SceneEntity");
        }
        inline app::SceneEntity* create() {
            return il2cpp::create_object<app::SceneEntity>(get_class());
        }
    } // namespace SceneEntity
} // namespace app::classes::types
