#pragma once
#include <Modloader/app/structs/ISpiritFlameAttackable.h>
#include <Modloader/app/structs/ISpiritFlameAttackable__Array.h>
#include <Modloader/app/structs/ISpiritFlameAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISpiritFlameAttackable {
        inline app::ISpiritFlameAttackable__Class** type_info() {
            static app::ISpiritFlameAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISpiritFlameAttackable__Class**)(modloader::win::memory::resolve_rva(0x0476E3A8));
            }
            return cache;
        }
        inline app::ISpiritFlameAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISpiritFlameAttackable__Class>(type_info(), "", "ISpiritFlameAttackable");
        }
        inline app::ISpiritFlameAttackable__Array* create_array(int size) {
            return il2cpp::array_new<app::ISpiritFlameAttackable__Array>(get_class(), size);
        }
        inline app::ISpiritFlameAttackable__Array* create_array(const std::vector<app::ISpiritFlameAttackable*>& items) {
            return il2cpp::array_new<app::ISpiritFlameAttackable__Array>(get_class(), items);
        }
    } // namespace ISpiritFlameAttackable
} // namespace app::classes::types
