#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddReplay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddReplay__Class** type_info;
        inline app::AddReplay__Class* get_class() {
            return il2cpp::get_class<app::AddReplay__Class>(type_info, "", "AddReplay");
        }
        inline app::AddReplay* create() {
            return il2cpp::create_object<app::AddReplay>(get_class());
        }
    } // namespace AddReplay
} // namespace app::classes::types
