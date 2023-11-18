#pragma once
#include <Modloader/app/structs/ISwordAttackable.h>
#include <Modloader/app/structs/ISwordAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISwordAttackable {
        inline app::ISwordAttackable__Class** type_info() {
            static app::ISwordAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISwordAttackable__Class**)(modloader::win::memory::resolve_rva(0x04797838));
            }
            return cache;
        }
        inline app::ISwordAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISwordAttackable__Class>(type_info(), "", "ISwordAttackable");
        }
    } // namespace ISwordAttackable
} // namespace app::classes::types
