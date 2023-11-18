#pragma once
#include <Modloader/app/structs/BulletHole_DestroyDelayed_d_2.h>
#include <Modloader/app/structs/BulletHole_DestroyDelayed_d_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BulletHole_DestroyDelayed_d_2 {
        inline app::BulletHole_DestroyDelayed_d_2__Class** type_info() {
            static app::BulletHole_DestroyDelayed_d_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BulletHole_DestroyDelayed_d_2__Class**)(modloader::win::memory::resolve_rva(0x04793C78));
            }
            return cache;
        }
        inline app::BulletHole_DestroyDelayed_d_2__Class* get_class() {
            return il2cpp::get_nested_class<app::BulletHole_DestroyDelayed_d_2__Class>(type_info(), "", "BulletHole", "<DestroyDelayed>d__2");
        }
        inline app::BulletHole_DestroyDelayed_d_2* create() {
            return il2cpp::create_object<app::BulletHole_DestroyDelayed_d_2>(get_class());
        }
    } // namespace BulletHole_DestroyDelayed_d_2
} // namespace app::classes::types
