#pragma once
#include <Modloader/app/structs/SeinSpiritLeashAbility.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritLeashAbility {
        inline app::SeinSpiritLeashAbility__Class** type_info() {
            static app::SeinSpiritLeashAbility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinSpiritLeashAbility__Class**)(modloader::win::memory::resolve_rva(0x04797FD8));
            }
            return cache;
        }
        inline app::SeinSpiritLeashAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritLeashAbility__Class>(type_info(), "", "SeinSpiritLeashAbility");
        }
        inline app::SeinSpiritLeashAbility* create() {
            return il2cpp::create_object<app::SeinSpiritLeashAbility>(get_class());
        }
    } // namespace SeinSpiritLeashAbility
} // namespace app::classes::types
