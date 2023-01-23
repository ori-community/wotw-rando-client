#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpringVinedController__Class.h>
#include <Modloader/app/structs/SpringVinedController.h>

namespace app::classes::types {
    namespace SpringVinedController {
        namespace {
            inline app::SpringVinedController__Class* type_info_ref = nullptr;
        }
        inline app::SpringVinedController__Class** type_info = &type_info_ref;
        inline app::SpringVinedController__Class* get_class() {
            return il2cpp::get_class<app::SpringVinedController__Class>(type_info, "", "SpringVinedController");
        }
        inline app::SpringVinedController* create() {
            return il2cpp::create_object<app::SpringVinedController>(get_class());
        }
    } // namespace SpringVinedController
} // namespace app::classes::types
