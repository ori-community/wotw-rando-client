#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfigureConfigurableJointAction {
        inline app::ConfigureConfigurableJointAction__Class** type_info = (app::ConfigureConfigurableJointAction__Class**)(modloader::win::memory::resolve_rva(0x0477DA18));
        inline app::ConfigureConfigurableJointAction__Class* get_class() {
            return il2cpp::get_class<app::ConfigureConfigurableJointAction__Class>(type_info, "", "ConfigureConfigurableJointAction");
        }
        inline app::ConfigureConfigurableJointAction* create() {
            return il2cpp::create_object<app::ConfigureConfigurableJointAction>(get_class());
        }
    } // namespace ConfigureConfigurableJointAction
} // namespace app::classes::types
