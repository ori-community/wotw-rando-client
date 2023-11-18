#pragma once
#include <Modloader/app/structs/IGlowAttackable.h>
#include <Modloader/app/structs/IGlowAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGlowAttackable {
        inline app::IGlowAttackable__Class** type_info() {
            static app::IGlowAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGlowAttackable__Class**)(modloader::win::memory::resolve_rva(0x047021D0));
            }
            return cache;
        }
        inline app::IGlowAttackable__Class* get_class() {
            return il2cpp::get_class<app::IGlowAttackable__Class>(type_info(), "", "IGlowAttackable");
        }
    } // namespace IGlowAttackable
} // namespace app::classes::types
