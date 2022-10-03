#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneSave {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneSave__Class** type_info;
        inline app::XboxOneSave__Class* get_class() {
            return il2cpp::get_class<app::XboxOneSave__Class>(type_info, "", "XboxOneSave");
        }
        inline app::XboxOneSave* create() {
            return il2cpp::create_object<app::XboxOneSave>(get_class());
        }
    } // namespace XboxOneSave
} // namespace app::classes::types
