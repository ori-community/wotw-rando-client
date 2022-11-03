#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightningController {
        namespace {
            inline app::LightningController__Class* type_info_ref = nullptr;
        }
        inline app::LightningController__Class** type_info = &type_info_ref;
        inline app::LightningController__Class* get_class() {
            return il2cpp::get_class<app::LightningController__Class>(type_info, "", "LightningController");
        }
        inline app::LightningController* create() {
            return il2cpp::create_object<app::LightningController>(get_class());
        }
    } // namespace LightningController
} // namespace app::classes::types
