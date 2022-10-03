#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindShaftController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WindShaftController__Class** type_info;
        inline app::WindShaftController__Class* get_class() {
            return il2cpp::get_class<app::WindShaftController__Class>(type_info, "", "WindShaftController");
        }
        inline app::WindShaftController* create() {
            return il2cpp::create_object<app::WindShaftController>(get_class());
        }
    } // namespace WindShaftController
} // namespace app::classes::types
