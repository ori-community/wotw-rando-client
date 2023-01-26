#pragma once
#include <Modloader/app/structs/ISwarmAttackable.h>
#include <Modloader/app/structs/ISwarmAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISwarmAttackable {
        inline app::ISwarmAttackable__Class** type_info() {
            static app::ISwarmAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISwarmAttackable__Class**)(modloader::win::memory::resolve_rva(0x047991C0));
            }
            return cache;
        }
        inline app::ISwarmAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISwarmAttackable__Class>(type_info(), "", "ISwarmAttackable");
        }
    } // namespace ISwarmAttackable
} // namespace app::classes::types
