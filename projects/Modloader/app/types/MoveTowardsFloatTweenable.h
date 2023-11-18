#pragma once
#include <Modloader/app/structs/MoveTowardsFloatTweenable.h>
#include <Modloader/app/structs/MoveTowardsFloatTweenable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveTowardsFloatTweenable {
        inline app::MoveTowardsFloatTweenable__Class** type_info() {
            static app::MoveTowardsFloatTweenable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoveTowardsFloatTweenable__Class**)(modloader::win::memory::resolve_rva(0x0470ED40));
            }
            return cache;
        }
        inline app::MoveTowardsFloatTweenable__Class* get_class() {
            return il2cpp::get_class<app::MoveTowardsFloatTweenable__Class>(type_info(), "Moon", "MoveTowardsFloatTweenable");
        }
        inline app::MoveTowardsFloatTweenable* create() {
            return il2cpp::create_object<app::MoveTowardsFloatTweenable>(get_class());
        }
    } // namespace MoveTowardsFloatTweenable
} // namespace app::classes::types
