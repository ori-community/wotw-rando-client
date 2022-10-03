#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionBasedGameObjectActivator {
        namespace {
            app::ConditionBasedGameObjectActivator__Class* type_info_ref = nullptr;
        }
        app::ConditionBasedGameObjectActivator__Class** type_info = &type_info_ref;
        inline app::ConditionBasedGameObjectActivator__Class* get_class() {
            return il2cpp::get_class<app::ConditionBasedGameObjectActivator__Class>(type_info, "", "ConditionBasedGameObjectActivator");
        }
        inline app::ConditionBasedGameObjectActivator* create() {
            return il2cpp::create_object<app::ConditionBasedGameObjectActivator>(get_class());
        }
    } // namespace ConditionBasedGameObjectActivator
} // namespace app::classes::types
