#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITrapAttackable {
        inline app::ITrapAttackable__Class** type_info = (app::ITrapAttackable__Class**)(modloader::win::memory::resolve_rva(0x04796AB0));
        inline app::ITrapAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITrapAttackable__Class>(type_info, "", "ITrapAttackable");
        }
    } // namespace ITrapAttackable
} // namespace app::classes::types
