#pragma once
#include <Modloader/app/structs/WorldRotation.h>
#include <Modloader/app/structs/WorldRotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldRotation {
        inline app::WorldRotation__Class** type_info() {
            static app::WorldRotation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldRotation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldRotation__Class* get_class() {
            return il2cpp::get_class<app::WorldRotation__Class>(type_info(), "", "WorldRotation");
        }
        inline app::WorldRotation* create() {
            return il2cpp::create_object<app::WorldRotation>(get_class());
        }
    } // namespace WorldRotation
} // namespace app::classes::types
