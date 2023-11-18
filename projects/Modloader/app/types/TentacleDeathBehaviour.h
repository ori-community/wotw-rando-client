#pragma once
#include <Modloader/app/structs/TentacleDeathBehaviour.h>
#include <Modloader/app/structs/TentacleDeathBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleDeathBehaviour {
        inline app::TentacleDeathBehaviour__Class** type_info() {
            static app::TentacleDeathBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleDeathBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleDeathBehaviour__Class>(type_info(), "", "TentacleDeathBehaviour");
        }
        inline app::TentacleDeathBehaviour* create() {
            return il2cpp::create_object<app::TentacleDeathBehaviour>(get_class());
        }
    } // namespace TentacleDeathBehaviour
} // namespace app::classes::types
