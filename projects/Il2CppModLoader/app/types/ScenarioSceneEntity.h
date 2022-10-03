#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenarioSceneEntity {
        namespace {
            app::ScenarioSceneEntity__Class* type_info_ref = nullptr;
        }
        app::ScenarioSceneEntity__Class** type_info = &type_info_ref;
        inline app::ScenarioSceneEntity__Class* get_class() {
            return il2cpp::get_class<app::ScenarioSceneEntity__Class>(type_info, "Moon.Timeline", "ScenarioSceneEntity");
        }
        inline app::ScenarioSceneEntity* create() {
            return il2cpp::create_object<app::ScenarioSceneEntity>(get_class());
        }
    } // namespace ScenarioSceneEntity
} // namespace app::classes::types
