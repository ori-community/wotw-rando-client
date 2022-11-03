#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleFPSController {
        namespace {
            inline app::SimpleFPSController__Class* type_info_ref = nullptr;
        }
        inline app::SimpleFPSController__Class** type_info = &type_info_ref;
        inline app::SimpleFPSController__Class* get_class() {
            return il2cpp::get_class<app::SimpleFPSController__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "SimpleFPSController");
        }
        inline app::SimpleFPSController* create() {
            return il2cpp::create_object<app::SimpleFPSController>(get_class());
        }
    } // namespace SimpleFPSController
} // namespace app::classes::types
