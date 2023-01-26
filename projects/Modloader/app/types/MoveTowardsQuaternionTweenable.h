#pragma once
#include <Modloader/app/structs/MoveTowardsQuaternionTweenable.h>
#include <Modloader/app/structs/MoveTowardsQuaternionTweenable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveTowardsQuaternionTweenable {
        inline app::MoveTowardsQuaternionTweenable__Class** type_info() {
            static app::MoveTowardsQuaternionTweenable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveTowardsQuaternionTweenable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveTowardsQuaternionTweenable__Class* get_class() {
            return il2cpp::get_class<app::MoveTowardsQuaternionTweenable__Class>(type_info(), "Moon", "MoveTowardsQuaternionTweenable");
        }
        inline app::MoveTowardsQuaternionTweenable* create() {
            return il2cpp::create_object<app::MoveTowardsQuaternionTweenable>(get_class());
        }
    } // namespace MoveTowardsQuaternionTweenable
} // namespace app::classes::types
