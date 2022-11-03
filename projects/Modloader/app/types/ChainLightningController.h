#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChainLightningController {
        namespace {
            inline app::ChainLightningController__Class* type_info_ref = nullptr;
        }
        inline app::ChainLightningController__Class** type_info = &type_info_ref;
        inline app::ChainLightningController__Class* get_class() {
            return il2cpp::get_class<app::ChainLightningController__Class>(type_info, "", "ChainLightningController");
        }
        inline app::ChainLightningController* create() {
            return il2cpp::create_object<app::ChainLightningController>(get_class());
        }
    } // namespace ChainLightningController
} // namespace app::classes::types
