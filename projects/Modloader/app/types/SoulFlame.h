#pragma once
#include <Modloader/app/structs/SoulFlame.h>
#include <Modloader/app/structs/SoulFlame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoulFlame {
        inline app::SoulFlame__Class** type_info() {
            static app::SoulFlame__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoulFlame__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoulFlame__Class* get_class() {
            return il2cpp::get_class<app::SoulFlame__Class>(type_info(), "", "SoulFlame");
        }
        inline app::SoulFlame* create() {
            return il2cpp::create_object<app::SoulFlame>(get_class());
        }
    } // namespace SoulFlame
} // namespace app::classes::types
