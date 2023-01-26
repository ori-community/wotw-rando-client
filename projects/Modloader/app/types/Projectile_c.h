#pragma once
#include <Modloader/app/structs/Projectile_c.h>
#include <Modloader/app/structs/Projectile_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Projectile_c {
        inline app::Projectile_c__Class** type_info() {
            static app::Projectile_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Projectile_c__Class**)(modloader::win::memory::resolve_rva(0x04750EC8));
            }
            return cache;
        }
        inline app::Projectile_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Projectile_c__Class>(type_info(), "", "Projectile", "<>c");
        }
        inline app::Projectile_c* create() {
            return il2cpp::create_object<app::Projectile_c>(get_class());
        }
    } // namespace Projectile_c
} // namespace app::classes::types
