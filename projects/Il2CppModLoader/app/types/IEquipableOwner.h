#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEquipableOwner {
        inline app::IEquipableOwner__Class** type_info = (app::IEquipableOwner__Class**)(modloader::win::memory::resolve_rva(0x04705E10));
        inline app::IEquipableOwner__Class* get_class() {
            return il2cpp::get_class<app::IEquipableOwner__Class>(type_info, "", "IEquipableOwner");
        }
    } // namespace IEquipableOwner
} // namespace app::classes::types
