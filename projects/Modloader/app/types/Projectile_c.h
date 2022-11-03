#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Projectile_c {
        inline app::Projectile_c__Class** type_info = (app::Projectile_c__Class**)(modloader::win::memory::resolve_rva(0x04750EC8));
        inline app::Projectile_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Projectile_c__Class>(type_info, "", "Projectile", "<>c");
        }
        inline app::Projectile_c* create() {
            return il2cpp::create_object<app::Projectile_c>(get_class());
        }
    } // namespace Projectile_c
} // namespace app::classes::types
