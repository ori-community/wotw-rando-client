#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BulletHole {
        namespace {
            app::BulletHole__Class* type_info_ref = nullptr;
        }
        app::BulletHole__Class** type_info = &type_info_ref;
        inline app::BulletHole__Class* get_class() {
            return il2cpp::get_class<app::BulletHole__Class>(type_info, "", "BulletHole");
        }
        inline app::BulletHole* create() {
            return il2cpp::create_object<app::BulletHole>(get_class());
        }
    } // namespace BulletHole
} // namespace app::classes::types
