#pragma once
#include <Modloader/app/structs/SeinIceSpiritFlame.h>
#include <Modloader/app/structs/SeinIceSpiritFlame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinIceSpiritFlame {
        inline app::SeinIceSpiritFlame__Class** type_info() {
            static app::SeinIceSpiritFlame__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinIceSpiritFlame__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinIceSpiritFlame__Class* get_class() {
            return il2cpp::get_class<app::SeinIceSpiritFlame__Class>(type_info(), "", "SeinIceSpiritFlame");
        }
        inline app::SeinIceSpiritFlame* create() {
            return il2cpp::create_object<app::SeinIceSpiritFlame>(get_class());
        }
    } // namespace SeinIceSpiritFlame
} // namespace app::classes::types
