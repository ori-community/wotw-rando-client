#pragma once
#include <Modloader/app/structs/ScenarioProxyEntity.h>
#include <Modloader/app/structs/ScenarioProxyEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenarioProxyEntity {
        inline app::ScenarioProxyEntity__Class** type_info() {
            static app::ScenarioProxyEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenarioProxyEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenarioProxyEntity__Class* get_class() {
            return il2cpp::get_class<app::ScenarioProxyEntity__Class>(type_info(), "Moon.Timeline", "ScenarioProxyEntity");
        }
        inline app::ScenarioProxyEntity* create() {
            return il2cpp::create_object<app::ScenarioProxyEntity>(get_class());
        }
    } // namespace ScenarioProxyEntity
} // namespace app::classes::types
