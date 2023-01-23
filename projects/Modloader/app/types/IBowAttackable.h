#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IBowAttackable__Class.h>

namespace app::classes::types {
    namespace IBowAttackable {
        inline app::IBowAttackable__Class** type_info = (app::IBowAttackable__Class**)(modloader::win::memory::resolve_rva(0x04720DB0));
        inline app::IBowAttackable__Class* get_class() {
            return il2cpp::get_class<app::IBowAttackable__Class>(type_info, "", "IBowAttackable");
        }
    } // namespace IBowAttackable
} // namespace app::classes::types
