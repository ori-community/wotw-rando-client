#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConditionBasedGameObjectActivator__Class.h>
#include <Modloader/app/structs/ConditionBasedGameObjectActivator.h>

namespace app::classes::types {
    namespace ConditionBasedGameObjectActivator {
        namespace {
            inline app::ConditionBasedGameObjectActivator__Class* type_info_ref = nullptr;
        }
        inline app::ConditionBasedGameObjectActivator__Class** type_info = &type_info_ref;
        inline app::ConditionBasedGameObjectActivator__Class* get_class() {
            return il2cpp::get_class<app::ConditionBasedGameObjectActivator__Class>(type_info, "", "ConditionBasedGameObjectActivator");
        }
        inline app::ConditionBasedGameObjectActivator* create() {
            return il2cpp::create_object<app::ConditionBasedGameObjectActivator>(get_class());
        }
    } // namespace ConditionBasedGameObjectActivator
} // namespace app::classes::types
