#pragma once
#include <Modloader/app/structs/SpiritGrenadeDamageDealer.h>
#include <Modloader/app/structs/SpiritGrenadeDamageDealer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritGrenadeDamageDealer {
        inline app::SpiritGrenadeDamageDealer__Class** type_info() {
            static app::SpiritGrenadeDamageDealer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritGrenadeDamageDealer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritGrenadeDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::SpiritGrenadeDamageDealer__Class>(type_info(), "", "SpiritGrenadeDamageDealer");
        }
        inline app::SpiritGrenadeDamageDealer* create() {
            return il2cpp::create_object<app::SpiritGrenadeDamageDealer>(get_class());
        }
    } // namespace SpiritGrenadeDamageDealer
} // namespace app::classes::types
