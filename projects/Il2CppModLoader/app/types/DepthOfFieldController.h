#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DepthOfFieldController__Class** type_info;
        inline app::DepthOfFieldController__Class* get_class() {
            return il2cpp::get_class<app::DepthOfFieldController__Class>(type_info, "", "DepthOfFieldController");
        }
        inline app::DepthOfFieldController* create() {
            return il2cpp::create_object<app::DepthOfFieldController>(get_class());
        }
    } // namespace DepthOfFieldController
} // namespace app::classes::types
