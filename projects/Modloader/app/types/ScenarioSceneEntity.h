#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenarioSceneEntity {
        namespace {
            inline app::ScenarioSceneEntity__Class* type_info_ref = nullptr;
        }
        inline app::ScenarioSceneEntity__Class** type_info = &type_info_ref;
        inline app::ScenarioSceneEntity__Class* get_class() {
            return il2cpp::get_class<app::ScenarioSceneEntity__Class>(type_info, "Moon.Timeline", "ScenarioSceneEntity");
        }
        inline app::ScenarioSceneEntity* create() {
            return il2cpp::create_object<app::ScenarioSceneEntity>(get_class());
        }
    } // namespace ScenarioSceneEntity
} // namespace app::classes::types
