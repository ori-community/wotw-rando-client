#pragma once
#include <Modloader/app/structs/SteepWall.h>
#include <Modloader/app/structs/SteepWall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteepWall {
        inline app::SteepWall__Class** type_info() {
            static app::SteepWall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteepWall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteepWall__Class* get_class() {
            return il2cpp::get_class<app::SteepWall__Class>(type_info(), "", "SteepWall");
        }
        inline app::SteepWall* create() {
            return il2cpp::create_object<app::SteepWall>(get_class());
        }
    } // namespace SteepWall
} // namespace app::classes::types
