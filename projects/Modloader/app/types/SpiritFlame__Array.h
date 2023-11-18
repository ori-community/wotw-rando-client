#pragma once
#include <Modloader/app/structs/SpiritFlame__Array.h>
#include <Modloader/app/structs/SpiritFlame__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritFlame__Array {
        inline app::SpiritFlame__Array__Class** type_info() {
            static app::SpiritFlame__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritFlame__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritFlame__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritFlame__Array__Class>(type_info(), "", "SpiritFlame[]");
        }
        inline app::SpiritFlame__Array* create() {
            return il2cpp::create_object<app::SpiritFlame__Array>(get_class());
        }
    } // namespace SpiritFlame__Array
} // namespace app::classes::types
