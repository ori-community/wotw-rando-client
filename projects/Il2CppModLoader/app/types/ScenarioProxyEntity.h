#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenarioProxyEntity {
        namespace {
            app::ScenarioProxyEntity__Class* type_info_ref = nullptr;
        }
        app::ScenarioProxyEntity__Class** type_info = &type_info_ref;
        inline app::ScenarioProxyEntity__Class* get_class() {
            return il2cpp::get_class<app::ScenarioProxyEntity__Class>(type_info, "Moon.Timeline", "ScenarioProxyEntity");
        }
        inline app::ScenarioProxyEntity* create() {
            return il2cpp::create_object<app::ScenarioProxyEntity>(get_class());
        }
    } // namespace ScenarioProxyEntity
} // namespace app::classes::types
