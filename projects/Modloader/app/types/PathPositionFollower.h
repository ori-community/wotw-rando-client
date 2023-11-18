#pragma once
#include <Modloader/app/structs/PathPositionFollower.h>
#include <Modloader/app/structs/PathPositionFollower__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathPositionFollower {
        inline app::PathPositionFollower__Class** type_info() {
            static app::PathPositionFollower__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PathPositionFollower__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PathPositionFollower__Class* get_class() {
            return il2cpp::get_class<app::PathPositionFollower__Class>(type_info(), "", "PathPositionFollower");
        }
        inline app::PathPositionFollower* create() {
            return il2cpp::create_object<app::PathPositionFollower>(get_class());
        }
    } // namespace PathPositionFollower
} // namespace app::classes::types
