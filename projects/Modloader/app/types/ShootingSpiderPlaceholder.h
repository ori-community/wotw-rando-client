#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShootingSpiderPlaceholder__Class.h>
#include <Modloader/app/structs/ShootingSpiderPlaceholder.h>

namespace app::classes::types {
    namespace ShootingSpiderPlaceholder {
        namespace {
            inline app::ShootingSpiderPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::ShootingSpiderPlaceholder__Class** type_info = &type_info_ref;
        inline app::ShootingSpiderPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderPlaceholder__Class>(type_info, "", "ShootingSpiderPlaceholder");
        }
        inline app::ShootingSpiderPlaceholder* create() {
            return il2cpp::create_object<app::ShootingSpiderPlaceholder>(get_class());
        }
    } // namespace ShootingSpiderPlaceholder
} // namespace app::classes::types
