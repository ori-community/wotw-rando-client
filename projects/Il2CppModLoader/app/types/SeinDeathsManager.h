#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDeathsManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDeathsManager__Class** type_info;
        inline app::SeinDeathsManager__Class* get_class() {
            return il2cpp::get_class<app::SeinDeathsManager__Class>(type_info, "", "SeinDeathsManager");
        }
        inline app::SeinDeathsManager* create() {
            return il2cpp::create_object<app::SeinDeathsManager>(get_class());
        }
    } // namespace SeinDeathsManager
} // namespace app::classes::types
