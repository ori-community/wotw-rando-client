#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HealthController__Class.h>
#include <Modloader/app/structs/HealthController.h>

namespace app::classes::types {
    namespace HealthController {
        namespace {
            inline app::HealthController__Class* type_info_ref = nullptr;
        }
        inline app::HealthController__Class** type_info = &type_info_ref;
        inline app::HealthController__Class* get_class() {
            return il2cpp::get_class<app::HealthController__Class>(type_info, "", "HealthController");
        }
        inline app::HealthController* create() {
            return il2cpp::create_object<app::HealthController>(get_class());
        }
    } // namespace HealthController
} // namespace app::classes::types
