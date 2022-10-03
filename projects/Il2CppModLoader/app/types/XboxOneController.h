#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneController__Class** type_info;
        inline app::XboxOneController__Class* get_class() {
            return il2cpp::get_class<app::XboxOneController__Class>(type_info, "", "XboxOneController");
        }
        inline app::XboxOneController* create() {
            return il2cpp::create_object<app::XboxOneController>(get_class());
        }
    } // namespace XboxOneController
} // namespace app::classes::types
