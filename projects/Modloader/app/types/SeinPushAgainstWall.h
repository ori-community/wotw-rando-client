#pragma once
#include <Modloader/app/structs/SeinPushAgainstWall.h>
#include <Modloader/app/structs/SeinPushAgainstWall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPushAgainstWall {
        inline app::SeinPushAgainstWall__Class** type_info() {
            static app::SeinPushAgainstWall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPushAgainstWall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPushAgainstWall__Class* get_class() {
            return il2cpp::get_class<app::SeinPushAgainstWall__Class>(type_info(), "", "SeinPushAgainstWall");
        }
        inline app::SeinPushAgainstWall* create() {
            return il2cpp::create_object<app::SeinPushAgainstWall>(get_class());
        }
    } // namespace SeinPushAgainstWall
} // namespace app::classes::types
