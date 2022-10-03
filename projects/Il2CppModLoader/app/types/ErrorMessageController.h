#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ErrorMessageController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ErrorMessageController__Class** type_info;
        inline app::ErrorMessageController__Class* get_class() {
            return il2cpp::get_class<app::ErrorMessageController__Class>(type_info, "", "ErrorMessageController");
        }
        inline app::ErrorMessageController* create() {
            return il2cpp::create_object<app::ErrorMessageController>(get_class());
        }
    } // namespace ErrorMessageController
} // namespace app::classes::types
