#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterEntity {
        namespace {
            inline app::LaserShooterEntity__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterEntity__Class** type_info = &type_info_ref;
        inline app::LaserShooterEntity__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterEntity__Class>(type_info, "", "LaserShooterEntity");
        }
        inline app::LaserShooterEntity* create() {
            return il2cpp::create_object<app::LaserShooterEntity>(get_class());
        }
    } // namespace LaserShooterEntity
} // namespace app::classes::types
