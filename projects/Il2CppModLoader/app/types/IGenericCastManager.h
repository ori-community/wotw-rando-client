#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGenericCastManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGenericCastManager__Class** type_info;
        inline app::IGenericCastManager__Class* get_class() {
            return il2cpp::get_class<app::IGenericCastManager__Class>(type_info, "", "IGenericCastManager");
        }
    } // namespace IGenericCastManager
} // namespace app::classes::types
