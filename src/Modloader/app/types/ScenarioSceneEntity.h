#pragma once
#include <Modloader/app/structs/ScenarioSceneEntity.h>
#include <Modloader/app/structs/ScenarioSceneEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenarioSceneEntity {
        inline app::ScenarioSceneEntity__Class** type_info() {
            static app::ScenarioSceneEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenarioSceneEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenarioSceneEntity__Class* get_class() {
            return il2cpp::get_class<app::ScenarioSceneEntity__Class>(type_info(), "Moon.Timeline", "ScenarioSceneEntity");
        }
        inline app::ScenarioSceneEntity* create() {
            return il2cpp::create_object<app::ScenarioSceneEntity>(get_class());
        }
    } // namespace ScenarioSceneEntity
} // namespace app::classes::types
