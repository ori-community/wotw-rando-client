#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShootingSpiderAnimations__Class.h>
#include <Modloader/app/structs/ShootingSpiderAnimations.h>

namespace app::classes::types {
    namespace ShootingSpiderAnimations {
        namespace {
            inline app::ShootingSpiderAnimations__Class* type_info_ref = nullptr;
        }
        inline app::ShootingSpiderAnimations__Class** type_info = &type_info_ref;
        inline app::ShootingSpiderAnimations__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderAnimations__Class>(type_info, "", "ShootingSpiderAnimations");
        }
        inline app::ShootingSpiderAnimations* create() {
            return il2cpp::create_object<app::ShootingSpiderAnimations>(get_class());
        }
    } // namespace ShootingSpiderAnimations
} // namespace app::classes::types
