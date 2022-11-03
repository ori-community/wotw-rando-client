#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLightTrailController {
        namespace {
            inline app::SpiritLightTrailController__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLightTrailController__Class** type_info = &type_info_ref;
        inline app::SpiritLightTrailController__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightTrailController__Class>(type_info, "", "SpiritLightTrailController");
        }
        inline app::SpiritLightTrailController* create() {
            return il2cpp::create_object<app::SpiritLightTrailController>(get_class());
        }
    } // namespace SpiritLightTrailController
} // namespace app::classes::types
