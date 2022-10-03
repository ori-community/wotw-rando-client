#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateLianaTongueAction {
        namespace {
            app::ActivateLianaTongueAction__Class* type_info_ref = nullptr;
        }
        app::ActivateLianaTongueAction__Class** type_info = &type_info_ref;
        inline app::ActivateLianaTongueAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateLianaTongueAction__Class>(type_info, "", "ActivateLianaTongueAction");
        }
        inline app::ActivateLianaTongueAction* create() {
            return il2cpp::create_object<app::ActivateLianaTongueAction>(get_class());
        }
    } // namespace ActivateLianaTongueAction
} // namespace app::classes::types
