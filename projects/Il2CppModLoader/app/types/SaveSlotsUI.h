#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSlotsUI__Class** type_info;
        inline app::SaveSlotsUI__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsUI__Class>(type_info, "", "SaveSlotsUI");
        }
        inline app::SaveSlotsUI* create() {
            return il2cpp::create_object<app::SaveSlotsUI>(get_class());
        }
    } // namespace SaveSlotsUI
} // namespace app::classes::types
