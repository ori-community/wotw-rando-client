#pragma once
#include <Modloader/app/structs/BabySeinSounds.h>
#include <Modloader/app/structs/BabySeinSounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabySeinSounds {
        inline app::BabySeinSounds__Class** type_info() {
            static app::BabySeinSounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabySeinSounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabySeinSounds__Class* get_class() {
            return il2cpp::get_class<app::BabySeinSounds__Class>(type_info(), "", "BabySeinSounds");
        }
        inline app::BabySeinSounds* create() {
            return il2cpp::create_object<app::BabySeinSounds>(get_class());
        }
    } // namespace BabySeinSounds
} // namespace app::classes::types
