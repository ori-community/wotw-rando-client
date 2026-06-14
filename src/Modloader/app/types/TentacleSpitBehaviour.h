#pragma once
#include <Modloader/app/structs/TentacleSpitBehaviour.h>
#include <Modloader/app/structs/TentacleSpitBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleSpitBehaviour {
        inline app::TentacleSpitBehaviour__Class** type_info() {
            static app::TentacleSpitBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleSpitBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleSpitBehaviour__Class>(type_info(), "Moon", "TentacleSpitBehaviour");
        }
        inline app::TentacleSpitBehaviour* create() {
            return il2cpp::create_object<app::TentacleSpitBehaviour>(get_class());
        }
    } // namespace TentacleSpitBehaviour
} // namespace app::classes::types
