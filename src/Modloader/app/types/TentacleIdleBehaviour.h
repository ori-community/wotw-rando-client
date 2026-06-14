#pragma once
#include <Modloader/app/structs/TentacleIdleBehaviour.h>
#include <Modloader/app/structs/TentacleIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleIdleBehaviour {
        inline app::TentacleIdleBehaviour__Class** type_info() {
            static app::TentacleIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleIdleBehaviour__Class>(type_info(), "Moon", "TentacleIdleBehaviour");
        }
        inline app::TentacleIdleBehaviour* create() {
            return il2cpp::create_object<app::TentacleIdleBehaviour>(get_class());
        }
    } // namespace TentacleIdleBehaviour
} // namespace app::classes::types
