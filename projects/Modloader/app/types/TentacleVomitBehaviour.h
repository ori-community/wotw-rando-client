#pragma once
#include <Modloader/app/structs/TentacleVomitBehaviour.h>
#include <Modloader/app/structs/TentacleVomitBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleVomitBehaviour {
        inline app::TentacleVomitBehaviour__Class** type_info() {
            static app::TentacleVomitBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleVomitBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleVomitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleVomitBehaviour__Class>(type_info(), "Moon", "TentacleVomitBehaviour");
        }
        inline app::TentacleVomitBehaviour* create() {
            return il2cpp::create_object<app::TentacleVomitBehaviour>(get_class());
        }
    } // namespace TentacleVomitBehaviour
} // namespace app::classes::types
