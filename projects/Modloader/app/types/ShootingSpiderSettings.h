#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShootingSpiderSettings__Class.h>
#include <Modloader/app/structs/ShootingSpiderSettings.h>

namespace app::classes::types {
    namespace ShootingSpiderSettings {
        namespace {
            inline app::ShootingSpiderSettings__Class* type_info_ref = nullptr;
        }
        inline app::ShootingSpiderSettings__Class** type_info = &type_info_ref;
        inline app::ShootingSpiderSettings__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderSettings__Class>(type_info, "", "ShootingSpiderSettings");
        }
        inline app::ShootingSpiderSettings* create() {
            return il2cpp::create_object<app::ShootingSpiderSettings>(get_class());
        }
    } // namespace ShootingSpiderSettings
} // namespace app::classes::types
