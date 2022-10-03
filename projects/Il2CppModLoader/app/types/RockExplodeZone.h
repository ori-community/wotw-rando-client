#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockExplodeZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockExplodeZone__Class** type_info;
        inline app::RockExplodeZone__Class* get_class() {
            return il2cpp::get_class<app::RockExplodeZone__Class>(type_info, "", "RockExplodeZone");
        }
        inline app::RockExplodeZone* create() {
            return il2cpp::create_object<app::RockExplodeZone>(get_class());
        }
        inline app::RockExplodeZone__Array* create_array(int size) {
            return il2cpp::array_new<app::RockExplodeZone__Array>(get_class(), size);
        }
    } // namespace RockExplodeZone
} // namespace app::classes::types
