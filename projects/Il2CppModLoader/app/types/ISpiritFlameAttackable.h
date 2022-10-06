#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISpiritFlameAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISpiritFlameAttackable__Class** type_info;
        inline app::ISpiritFlameAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISpiritFlameAttackable__Class>(type_info, "", "ISpiritFlameAttackable");
        }
        inline app::ISpiritFlameAttackable__Array* create_array(int size) {
            return il2cpp::array_new<app::ISpiritFlameAttackable__Array>(get_class(), size);
        }
        inline app::ISpiritFlameAttackable__Array* create_array(const std::vector<app::ISpiritFlameAttackable*>& items) {
            return il2cpp::array_new<app::ISpiritFlameAttackable__Array>(get_class(), items);
        }
    } // namespace ISpiritFlameAttackable
} // namespace app::classes::types
