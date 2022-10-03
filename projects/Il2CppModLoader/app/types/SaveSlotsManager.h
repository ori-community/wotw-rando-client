#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSlotsManager__Class** type_info;
        inline app::SaveSlotsManager__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsManager__Class>(type_info, "", "SaveSlotsManager");
        }
        inline app::SaveSlotsManager* create() {
            return il2cpp::create_object<app::SaveSlotsManager>(get_class());
        }
    } // namespace SaveSlotsManager
} // namespace app::classes::types
