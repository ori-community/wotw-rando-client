#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterMinibossPlaceholder__Class.h>
#include <Modloader/app/structs/LaserShooterMinibossPlaceholder.h>

namespace app::classes::types {
    namespace LaserShooterMinibossPlaceholder {
        namespace {
            inline app::LaserShooterMinibossPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossPlaceholder__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossPlaceholder__Class>(type_info, "", "LaserShooterMinibossPlaceholder");
        }
        inline app::LaserShooterMinibossPlaceholder* create() {
            return il2cpp::create_object<app::LaserShooterMinibossPlaceholder>(get_class());
        }
    } // namespace LaserShooterMinibossPlaceholder
} // namespace app::classes::types
