#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterMinibossPath__Class.h>
#include <Modloader/app/structs/LaserShooterMinibossPath.h>

namespace app::classes::types {
    namespace LaserShooterMinibossPath {
        namespace {
            inline app::LaserShooterMinibossPath__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossPath__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossPath__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossPath__Class>(type_info, "", "LaserShooterMinibossPath");
        }
        inline app::LaserShooterMinibossPath* create() {
            return il2cpp::create_object<app::LaserShooterMinibossPath>(get_class());
        }
    } // namespace LaserShooterMinibossPath
} // namespace app::classes::types
