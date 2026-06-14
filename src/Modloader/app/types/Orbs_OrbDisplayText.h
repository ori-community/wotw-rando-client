#pragma once
#include <Modloader/app/structs/Orbs_OrbDisplayText.h>
#include <Modloader/app/structs/Orbs_OrbDisplayText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Orbs_OrbDisplayText {
        inline app::Orbs_OrbDisplayText__Class** type_info() {
            static app::Orbs_OrbDisplayText__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Orbs_OrbDisplayText__Class**)(modloader::win::memory::resolve_rva(0x04723A18));
            }
            return cache;
        }
        inline app::Orbs_OrbDisplayText__Class* get_class() {
            return il2cpp::get_nested_class<app::Orbs_OrbDisplayText__Class>(type_info(), "Game", "Orbs", "OrbDisplayText");
        }
        inline app::Orbs_OrbDisplayText* create() {
            return il2cpp::create_object<app::Orbs_OrbDisplayText>(get_class());
        }
    } // namespace Orbs_OrbDisplayText
} // namespace app::classes::types
