#pragma once
#include <Modloader/app/structs/KeepSceneLoadedEntity.h>
#include <Modloader/app/structs/KeepSceneLoadedEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeepSceneLoadedEntity {
        inline app::KeepSceneLoadedEntity__Class** type_info() {
            static app::KeepSceneLoadedEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeepSceneLoadedEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeepSceneLoadedEntity__Class* get_class() {
            return il2cpp::get_class<app::KeepSceneLoadedEntity__Class>(type_info(), "Moon.Timeline", "KeepSceneLoadedEntity");
        }
        inline app::KeepSceneLoadedEntity* create() {
            return il2cpp::create_object<app::KeepSceneLoadedEntity>(get_class());
        }
    } // namespace KeepSceneLoadedEntity
} // namespace app::classes::types
