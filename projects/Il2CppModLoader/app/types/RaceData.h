#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceData__Class** type_info;
        inline app::RaceData__Class* get_class() {
            return il2cpp::get_class<app::RaceData__Class>(type_info, "Moon.Race", "RaceData");
        }
        inline app::RaceData* create() {
            return il2cpp::create_object<app::RaceData>(get_class());
        }
    } // namespace RaceData
} // namespace app::classes::types
