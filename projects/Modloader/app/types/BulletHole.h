#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BulletHole {
        namespace {
            inline app::BulletHole__Class* type_info_ref = nullptr;
        }
        inline app::BulletHole__Class** type_info = &type_info_ref;
        inline app::BulletHole__Class* get_class() {
            return il2cpp::get_class<app::BulletHole__Class>(type_info, "", "BulletHole");
        }
        inline app::BulletHole* create() {
            return il2cpp::create_object<app::BulletHole>(get_class());
        }
    } // namespace BulletHole
} // namespace app::classes::types
