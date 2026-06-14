#pragma once
#include <Modloader/app/structs/IHammerAttackable.h>
#include <Modloader/app/structs/IHammerAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IHammerAttackable {
        inline app::IHammerAttackable__Class** type_info() {
            static app::IHammerAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IHammerAttackable__Class**)(modloader::win::memory::resolve_rva(0x04753610));
            }
            return cache;
        }
        inline app::IHammerAttackable__Class* get_class() {
            return il2cpp::get_class<app::IHammerAttackable__Class>(type_info(), "", "IHammerAttackable");
        }
    } // namespace IHammerAttackable
} // namespace app::classes::types
