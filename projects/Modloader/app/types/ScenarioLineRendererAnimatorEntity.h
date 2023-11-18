#pragma once
#include <Modloader/app/structs/ScenarioLineRendererAnimatorEntity.h>
#include <Modloader/app/structs/ScenarioLineRendererAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenarioLineRendererAnimatorEntity {
        inline app::ScenarioLineRendererAnimatorEntity__Class** type_info() {
            static app::ScenarioLineRendererAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenarioLineRendererAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenarioLineRendererAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ScenarioLineRendererAnimatorEntity__Class>(type_info(), "Moon.Timeline", "ScenarioLineRendererAnimatorEntity");
        }
        inline app::ScenarioLineRendererAnimatorEntity* create() {
            return il2cpp::create_object<app::ScenarioLineRendererAnimatorEntity>(get_class());
        }
    } // namespace ScenarioLineRendererAnimatorEntity
} // namespace app::classes::types
