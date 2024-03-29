#pragma once
#include <Modloader/app/structs/ISpiritSlashAttackable.h>
#include <Modloader/app/structs/ISpiritSlashAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISpiritSlashAttackable {
        inline app::ISpiritSlashAttackable__Class** type_info() {
            static app::ISpiritSlashAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISpiritSlashAttackable__Class**)(modloader::win::memory::resolve_rva(0x04727BD0));
            }
            return cache;
        }
        inline app::ISpiritSlashAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISpiritSlashAttackable__Class>(type_info(), "", "ISpiritSlashAttackable");
        }
    } // namespace ISpiritSlashAttackable
} // namespace app::classes::types
