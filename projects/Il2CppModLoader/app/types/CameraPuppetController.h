#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraPuppetController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraPuppetController__Class** type_info;
        inline app::CameraPuppetController__Class* get_class() {
            return il2cpp::get_class<app::CameraPuppetController__Class>(type_info, "", "CameraPuppetController");
        }
        inline app::CameraPuppetController* create() {
            return il2cpp::create_object<app::CameraPuppetController>(get_class());
        }
    } // namespace CameraPuppetController
} // namespace app::classes::types
