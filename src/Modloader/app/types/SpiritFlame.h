#pragma once
#include <Modloader/app/structs/SpiritFlame.h>
#include <Modloader/app/structs/SpiritFlame__Array.h>
#include <Modloader/app/structs/SpiritFlame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritFlame {
        inline app::SpiritFlame__Class** type_info() {
            static app::SpiritFlame__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritFlame__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritFlame__Class* get_class() {
            return il2cpp::get_class<app::SpiritFlame__Class>(type_info(), "", "SpiritFlame");
        }
        inline app::SpiritFlame* create() {
            return il2cpp::create_object<app::SpiritFlame>(get_class());
        }
        inline app::SpiritFlame__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritFlame__Array>(get_class(), size);
        }
        inline app::SpiritFlame__Array* create_array(const std::vector<app::SpiritFlame*>& items) {
            return il2cpp::array_new<app::SpiritFlame__Array>(get_class(), items);
        }
    } // namespace SpiritFlame
} // namespace app::classes::types
