#pragma once
#include <Modloader/app/structs/BulletHole.h>
#include <Modloader/app/structs/BulletHole__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BulletHole {
        inline app::BulletHole__Class** type_info() {
            static app::BulletHole__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BulletHole__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BulletHole__Class* get_class() {
            return il2cpp::get_class<app::BulletHole__Class>(type_info(), "", "BulletHole");
        }
        inline app::BulletHole* create() {
            return il2cpp::create_object<app::BulletHole>(get_class());
        }
    } // namespace BulletHole
} // namespace app::classes::types
