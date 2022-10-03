#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotatingMaceRoomCarryablePlaceholder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RotatingMaceRoomCarryablePlaceholder__Class** type_info;
        inline app::RotatingMaceRoomCarryablePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::RotatingMaceRoomCarryablePlaceholder__Class>(type_info, "", "RotatingMaceRoomCarryablePlaceholder");
        }
        inline app::RotatingMaceRoomCarryablePlaceholder* create() {
            return il2cpp::create_object<app::RotatingMaceRoomCarryablePlaceholder>(get_class());
        }
    } // namespace RotatingMaceRoomCarryablePlaceholder
} // namespace app::classes::types
