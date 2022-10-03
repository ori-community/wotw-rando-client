#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateCheckpointAction {
        namespace {
            app::CreateCheckpointAction__Class* type_info_ref = nullptr;
        }
        app::CreateCheckpointAction__Class** type_info = &type_info_ref;
        inline app::CreateCheckpointAction__Class* get_class() {
            return il2cpp::get_class<app::CreateCheckpointAction__Class>(type_info, "", "CreateCheckpointAction");
        }
        inline app::CreateCheckpointAction* create() {
            return il2cpp::create_object<app::CreateCheckpointAction>(get_class());
        }
    } // namespace CreateCheckpointAction
} // namespace app::classes::types
