#pragma once
#include <Modloader/app/structs/SeinMaxSpeedBasedOnDistance.h>
#include <Modloader/app/structs/SeinMaxSpeedBasedOnDistance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMaxSpeedBasedOnDistance {
        inline app::SeinMaxSpeedBasedOnDistance__Class** type_info() {
            static app::SeinMaxSpeedBasedOnDistance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMaxSpeedBasedOnDistance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMaxSpeedBasedOnDistance__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxSpeedBasedOnDistance__Class>(type_info(), "", "SeinMaxSpeedBasedOnDistance");
        }
        inline app::SeinMaxSpeedBasedOnDistance* create() {
            return il2cpp::create_object<app::SeinMaxSpeedBasedOnDistance>(get_class());
        }
    } // namespace SeinMaxSpeedBasedOnDistance
} // namespace app::classes::types
