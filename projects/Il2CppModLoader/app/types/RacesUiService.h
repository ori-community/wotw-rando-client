#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RacesUiService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RacesUiService__Class** type_info;
        inline app::RacesUiService__Class* get_class() {
            return il2cpp::get_class<app::RacesUiService__Class>(type_info, "", "RacesUiService");
        }
        inline app::RacesUiService* create() {
            return il2cpp::create_object<app::RacesUiService>(get_class());
        }
    } // namespace RacesUiService
} // namespace app::classes::types
