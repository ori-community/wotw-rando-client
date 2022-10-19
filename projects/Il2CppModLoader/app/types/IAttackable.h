#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAttackable {
        inline app::IAttackable__Class** type_info = (app::IAttackable__Class**)(modloader::win::memory::resolve_rva(0x04747628));
        inline app::IAttackable__Class* get_class() {
            return il2cpp::get_class<app::IAttackable__Class>(type_info, "", "IAttackable");
        }
        inline app::IAttackable__Array* create_array(int size) {
            return il2cpp::array_new<app::IAttackable__Array>(get_class(), size);
        }
        inline app::IAttackable__Array* create_array(const std::vector<app::IAttackable*>& items) {
            return il2cpp::array_new<app::IAttackable__Array>(get_class(), items);
        }
    } // namespace IAttackable
} // namespace app::classes::types
