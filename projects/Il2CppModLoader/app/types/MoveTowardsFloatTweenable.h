#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveTowardsFloatTweenable {
        inline app::MoveTowardsFloatTweenable__Class** type_info = (app::MoveTowardsFloatTweenable__Class**)(modloader::win::memory::resolve_rva(0x0470ED40));
        inline app::MoveTowardsFloatTweenable__Class* get_class() {
            return il2cpp::get_class<app::MoveTowardsFloatTweenable__Class>(type_info, "Moon", "MoveTowardsFloatTweenable");
        }
        inline app::MoveTowardsFloatTweenable* create() {
            return il2cpp::create_object<app::MoveTowardsFloatTweenable>(get_class());
        }
    } // namespace MoveTowardsFloatTweenable
} // namespace app::classes::types
