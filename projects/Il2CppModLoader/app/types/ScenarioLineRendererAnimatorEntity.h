#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenarioLineRendererAnimatorEntity {
        namespace {
            app::ScenarioLineRendererAnimatorEntity__Class* type_info_ref = nullptr;
        }
        app::ScenarioLineRendererAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::ScenarioLineRendererAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ScenarioLineRendererAnimatorEntity__Class>(type_info, "Moon.Timeline", "ScenarioLineRendererAnimatorEntity");
        }
        inline app::ScenarioLineRendererAnimatorEntity* create() {
            return il2cpp::create_object<app::ScenarioLineRendererAnimatorEntity>(get_class());
        }
    } // namespace ScenarioLineRendererAnimatorEntity
} // namespace app::classes::types
