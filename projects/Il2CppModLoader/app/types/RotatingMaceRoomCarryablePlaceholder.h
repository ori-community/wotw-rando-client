#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotatingMaceRoomCarryablePlaceholder {
        inline app::RotatingMaceRoomCarryablePlaceholder__Class** type_info = (app::RotatingMaceRoomCarryablePlaceholder__Class**)(modloader::win::memory::resolve_rva(0x0475EF60));
        inline app::RotatingMaceRoomCarryablePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::RotatingMaceRoomCarryablePlaceholder__Class>(type_info, "", "RotatingMaceRoomCarryablePlaceholder");
        }
        inline app::RotatingMaceRoomCarryablePlaceholder* create() {
            return il2cpp::create_object<app::RotatingMaceRoomCarryablePlaceholder>(get_class());
        }
    } // namespace RotatingMaceRoomCarryablePlaceholder
} // namespace app::classes::types
