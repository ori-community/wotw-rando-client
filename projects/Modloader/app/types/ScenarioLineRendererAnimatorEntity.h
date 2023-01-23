#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenarioLineRendererAnimatorEntity__Class.h>
#include <Modloader/app/structs/ScenarioLineRendererAnimatorEntity.h>

namespace app::classes::types {
    namespace ScenarioLineRendererAnimatorEntity {
        namespace {
            inline app::ScenarioLineRendererAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::ScenarioLineRendererAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::ScenarioLineRendererAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ScenarioLineRendererAnimatorEntity__Class>(type_info, "Moon.Timeline", "ScenarioLineRendererAnimatorEntity");
        }
        inline app::ScenarioLineRendererAnimatorEntity* create() {
            return il2cpp::create_object<app::ScenarioLineRendererAnimatorEntity>(get_class());
        }
    } // namespace ScenarioLineRendererAnimatorEntity
} // namespace app::classes::types
