#pragma once
#include <Modloader/app/structs/MoveTowardsColorTweenable.h>
#include <Modloader/app/structs/MoveTowardsColorTweenable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveTowardsColorTweenable {
        inline app::MoveTowardsColorTweenable__Class** type_info() {
            static app::MoveTowardsColorTweenable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoveTowardsColorTweenable__Class**)(modloader::win::memory::resolve_rva(0x0477F9E0));
            }
            return cache;
        }
        inline app::MoveTowardsColorTweenable__Class* get_class() {
            return il2cpp::get_class<app::MoveTowardsColorTweenable__Class>(type_info(), "Moon", "MoveTowardsColorTweenable");
        }
        inline app::MoveTowardsColorTweenable* create() {
            return il2cpp::create_object<app::MoveTowardsColorTweenable>(get_class());
        }
    } // namespace MoveTowardsColorTweenable
} // namespace app::classes::types
