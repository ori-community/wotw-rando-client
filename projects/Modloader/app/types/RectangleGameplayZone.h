#pragma once
#include <Modloader/app/structs/RectangleGameplayZone.h>
#include <Modloader/app/structs/RectangleGameplayZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectangleGameplayZone {
        inline app::RectangleGameplayZone__Class** type_info() {
            static app::RectangleGameplayZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RectangleGameplayZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RectangleGameplayZone__Class* get_class() {
            return il2cpp::get_class<app::RectangleGameplayZone__Class>(type_info(), "", "RectangleGameplayZone");
        }
        inline app::RectangleGameplayZone* create() {
            return il2cpp::create_object<app::RectangleGameplayZone>(get_class());
        }
    } // namespace RectangleGameplayZone
} // namespace app::classes::types
