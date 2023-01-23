#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenarioProxyEntity__Class.h>
#include <Modloader/app/structs/ScenarioProxyEntity.h>

namespace app::classes::types {
    namespace ScenarioProxyEntity {
        namespace {
            inline app::ScenarioProxyEntity__Class* type_info_ref = nullptr;
        }
        inline app::ScenarioProxyEntity__Class** type_info = &type_info_ref;
        inline app::ScenarioProxyEntity__Class* get_class() {
            return il2cpp::get_class<app::ScenarioProxyEntity__Class>(type_info, "Moon.Timeline", "ScenarioProxyEntity");
        }
        inline app::ScenarioProxyEntity* create() {
            return il2cpp::create_object<app::ScenarioProxyEntity>(get_class());
        }
    } // namespace ScenarioProxyEntity
} // namespace app::classes::types
