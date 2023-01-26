#pragma once
#include <Modloader/app/structs/TargetPositionFollower.h>
#include <Modloader/app/structs/TargetPositionFollower__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetPositionFollower {
        inline app::TargetPositionFollower__Class** type_info() {
            static app::TargetPositionFollower__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetPositionFollower__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetPositionFollower__Class* get_class() {
            return il2cpp::get_class<app::TargetPositionFollower__Class>(type_info(), "", "TargetPositionFollower");
        }
        inline app::TargetPositionFollower* create() {
            return il2cpp::create_object<app::TargetPositionFollower>(get_class());
        }
    } // namespace TargetPositionFollower
} // namespace app::classes::types
