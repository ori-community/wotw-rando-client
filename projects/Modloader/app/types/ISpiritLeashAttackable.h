#pragma once
#include <Modloader/app/structs/ISpiritLeashAttackable.h>
#include <Modloader/app/structs/ISpiritLeashAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISpiritLeashAttackable {
        inline app::ISpiritLeashAttackable__Class** type_info() {
            static app::ISpiritLeashAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISpiritLeashAttackable__Class**)(modloader::win::memory::resolve_rva(0x047077C8));
            }
            return cache;
        }
        inline app::ISpiritLeashAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISpiritLeashAttackable__Class>(type_info(), "", "ISpiritLeashAttackable");
        }
    } // namespace ISpiritLeashAttackable
} // namespace app::classes::types
