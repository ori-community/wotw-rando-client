#pragma once
#include <Modloader/app/structs/Enemy3D.h>
#include <Modloader/app/structs/Enemy3D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Enemy3D {
        inline app::Enemy3D__Class** type_info() {
            static app::Enemy3D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Enemy3D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Enemy3D__Class* get_class() {
            return il2cpp::get_class<app::Enemy3D__Class>(type_info(), "", "Enemy3D");
        }
        inline app::Enemy3D* create() {
            return il2cpp::create_object<app::Enemy3D>(get_class());
        }
    } // namespace Enemy3D
} // namespace app::classes::types
