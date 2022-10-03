#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetReplay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetReplay__Class** type_info;
        inline app::GetReplay__Class* get_class() {
            return il2cpp::get_class<app::GetReplay__Class>(type_info, "", "GetReplay");
        }
        inline app::GetReplay* create() {
            return il2cpp::create_object<app::GetReplay>(get_class());
        }
    } // namespace GetReplay
} // namespace app::classes::types
