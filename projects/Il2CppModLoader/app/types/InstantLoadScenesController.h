#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantLoadScenesController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantLoadScenesController__Class** type_info;
        inline app::InstantLoadScenesController__Class* get_class() {
            return il2cpp::get_class<app::InstantLoadScenesController__Class>(type_info, "", "InstantLoadScenesController");
        }
        inline app::InstantLoadScenesController* create() {
            return il2cpp::create_object<app::InstantLoadScenesController>(get_class());
        }
    } // namespace InstantLoadScenesController
} // namespace app::classes::types
