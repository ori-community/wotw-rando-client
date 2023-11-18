#pragma once
#include <Modloader/app/structs/RotatingMaceRoomCarryable.h>
#include <Modloader/app/structs/RotatingMaceRoomCarryable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotatingMaceRoomCarryable {
        inline app::RotatingMaceRoomCarryable__Class** type_info() {
            static app::RotatingMaceRoomCarryable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotatingMaceRoomCarryable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotatingMaceRoomCarryable__Class* get_class() {
            return il2cpp::get_class<app::RotatingMaceRoomCarryable__Class>(type_info(), "", "RotatingMaceRoomCarryable");
        }
        inline app::RotatingMaceRoomCarryable* create() {
            return il2cpp::create_object<app::RotatingMaceRoomCarryable>(get_class());
        }
    } // namespace RotatingMaceRoomCarryable
} // namespace app::classes::types
