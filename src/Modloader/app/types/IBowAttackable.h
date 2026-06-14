#pragma once
#include <Modloader/app/structs/IBowAttackable.h>
#include <Modloader/app/structs/IBowAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBowAttackable {
        inline app::IBowAttackable__Class** type_info() {
            static app::IBowAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBowAttackable__Class**)(modloader::win::memory::resolve_rva(0x04720DB0));
            }
            return cache;
        }
        inline app::IBowAttackable__Class* get_class() {
            return il2cpp::get_class<app::IBowAttackable__Class>(type_info(), "", "IBowAttackable");
        }
    } // namespace IBowAttackable
} // namespace app::classes::types
