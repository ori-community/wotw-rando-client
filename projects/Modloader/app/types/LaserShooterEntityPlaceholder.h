#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterEntityPlaceholder__Class.h>
#include <Modloader/app/structs/LaserShooterEntityPlaceholder.h>

namespace app::classes::types {
    namespace LaserShooterEntityPlaceholder {
        namespace {
            inline app::LaserShooterEntityPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterEntityPlaceholder__Class** type_info = &type_info_ref;
        inline app::LaserShooterEntityPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterEntityPlaceholder__Class>(type_info, "", "LaserShooterEntityPlaceholder");
        }
        inline app::LaserShooterEntityPlaceholder* create() {
            return il2cpp::create_object<app::LaserShooterEntityPlaceholder>(get_class());
        }
    } // namespace LaserShooterEntityPlaceholder
} // namespace app::classes::types
