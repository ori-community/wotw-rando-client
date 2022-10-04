#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAlphaBlendModeController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAlphaBlendModeController__Class** type_info;
        inline app::IAlphaBlendModeController__Class* get_class() {
            return il2cpp::get_class<app::IAlphaBlendModeController__Class>(type_info, "", "IAlphaBlendModeController");
        }
        inline app::IAlphaBlendModeController* create() {
            return il2cpp::create_object<app::IAlphaBlendModeController>(get_class());
        }
    } // namespace IAlphaBlendModeController
} // namespace app::classes::types
