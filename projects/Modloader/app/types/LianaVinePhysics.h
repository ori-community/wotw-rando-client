#pragma once
#include <Modloader/app/structs/LianaVinePhysics.h>
#include <Modloader/app/structs/LianaVinePhysics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LianaVinePhysics {
        inline app::LianaVinePhysics__Class** type_info() {
            static app::LianaVinePhysics__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LianaVinePhysics__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LianaVinePhysics__Class* get_class() {
            return il2cpp::get_class<app::LianaVinePhysics__Class>(type_info(), "", "LianaVinePhysics");
        }
        inline app::LianaVinePhysics* create() {
            return il2cpp::create_object<app::LianaVinePhysics>(get_class());
        }
    } // namespace LianaVinePhysics
} // namespace app::classes::types
