#pragma once
#include <Modloader/app/structs/ConfigureConfigurableJointAction.h>
#include <Modloader/app/structs/ConfigureConfigurableJointAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigureConfigurableJointAction {
        inline app::ConfigureConfigurableJointAction__Class** type_info() {
            static app::ConfigureConfigurableJointAction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConfigureConfigurableJointAction__Class**)(modloader::win::memory::resolve_rva(0x0477DA18));
            }
            return cache;
        }
        inline app::ConfigureConfigurableJointAction__Class* get_class() {
            return il2cpp::get_class<app::ConfigureConfigurableJointAction__Class>(type_info(), "", "ConfigureConfigurableJointAction");
        }
        inline app::ConfigureConfigurableJointAction* create() {
            return il2cpp::create_object<app::ConfigureConfigurableJointAction>(get_class());
        }
    } // namespace ConfigureConfigurableJointAction
} // namespace app::classes::types
