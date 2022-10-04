#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEquipableOwner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEquipableOwner__Class** type_info;
        inline app::IEquipableOwner__Class* get_class() {
            return il2cpp::get_class<app::IEquipableOwner__Class>(type_info, "", "IEquipableOwner");
        }
    } // namespace IEquipableOwner
} // namespace app::classes::types
