#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceHandler__Class** type_info;
        inline app::RaceHandler__Class* get_class() {
            return il2cpp::get_class<app::RaceHandler__Class>(type_info, "", "RaceHandler");
        }
        inline app::RaceHandler* create() {
            return il2cpp::create_object<app::RaceHandler>(get_class());
        }
    } // namespace RaceHandler
} // namespace app::classes::types
