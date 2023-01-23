#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISwarmAttackable__Class.h>

namespace app::classes::types {
    namespace ISwarmAttackable {
        inline app::ISwarmAttackable__Class** type_info = (app::ISwarmAttackable__Class**)(modloader::win::memory::resolve_rva(0x047991C0));
        inline app::ISwarmAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISwarmAttackable__Class>(type_info, "", "ISwarmAttackable");
        }
    } // namespace ISwarmAttackable
} // namespace app::classes::types
