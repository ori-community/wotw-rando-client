#pragma once
#include <Modloader/app/structs/MoveTowardsVector3Tweenable.h>
#include <Modloader/app/structs/MoveTowardsVector3Tweenable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveTowardsVector3Tweenable {
        inline app::MoveTowardsVector3Tweenable__Class** type_info() {
            static app::MoveTowardsVector3Tweenable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoveTowardsVector3Tweenable__Class**)(modloader::win::memory::resolve_rva(0x04794730));
            }
            return cache;
        }
        inline app::MoveTowardsVector3Tweenable__Class* get_class() {
            return il2cpp::get_class<app::MoveTowardsVector3Tweenable__Class>(type_info(), "Moon", "MoveTowardsVector3Tweenable");
        }
        inline app::MoveTowardsVector3Tweenable* create() {
            return il2cpp::create_object<app::MoveTowardsVector3Tweenable>(get_class());
        }
    } // namespace MoveTowardsVector3Tweenable
} // namespace app::classes::types
