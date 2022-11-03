#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterMinibossEntity {
        inline app::LaserShooterMinibossEntity__Class** type_info = (app::LaserShooterMinibossEntity__Class**)(modloader::win::memory::resolve_rva(0x0472E5D0));
        inline app::LaserShooterMinibossEntity__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossEntity__Class>(type_info, "", "LaserShooterMinibossEntity");
        }
        inline app::LaserShooterMinibossEntity* create() {
            return il2cpp::create_object<app::LaserShooterMinibossEntity>(get_class());
        }
    } // namespace LaserShooterMinibossEntity
} // namespace app::classes::types
