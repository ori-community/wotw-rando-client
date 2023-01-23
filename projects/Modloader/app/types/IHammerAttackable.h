#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IHammerAttackable__Class.h>

namespace app::classes::types {
    namespace IHammerAttackable {
        inline app::IHammerAttackable__Class** type_info = (app::IHammerAttackable__Class**)(modloader::win::memory::resolve_rva(0x04753610));
        inline app::IHammerAttackable__Class* get_class() {
            return il2cpp::get_class<app::IHammerAttackable__Class>(type_info, "", "IHammerAttackable");
        }
    } // namespace IHammerAttackable
} // namespace app::classes::types
