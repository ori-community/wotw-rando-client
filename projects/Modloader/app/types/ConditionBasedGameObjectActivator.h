#pragma once
#include <Modloader/app/structs/ConditionBasedGameObjectActivator.h>
#include <Modloader/app/structs/ConditionBasedGameObjectActivator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionBasedGameObjectActivator {
        inline app::ConditionBasedGameObjectActivator__Class** type_info() {
            static app::ConditionBasedGameObjectActivator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionBasedGameObjectActivator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionBasedGameObjectActivator__Class* get_class() {
            return il2cpp::get_class<app::ConditionBasedGameObjectActivator__Class>(type_info(), "", "ConditionBasedGameObjectActivator");
        }
        inline app::ConditionBasedGameObjectActivator* create() {
            return il2cpp::create_object<app::ConditionBasedGameObjectActivator>(get_class());
        }
    } // namespace ConditionBasedGameObjectActivator
} // namespace app::classes::types
