#pragma once
#include <Modloader/app/structs/WaterCurrentController.h>
#include <Modloader/app/structs/WaterCurrentController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterCurrentController {
        inline app::WaterCurrentController__Class** type_info() {
            static app::WaterCurrentController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaterCurrentController__Class**)(modloader::win::memory::resolve_rva(0x0471CED0));
            }
            return cache;
        }
        inline app::WaterCurrentController__Class* get_class() {
            return il2cpp::get_class<app::WaterCurrentController__Class>(type_info(), "", "WaterCurrentController");
        }
        inline app::WaterCurrentController* create() {
            return il2cpp::create_object<app::WaterCurrentController>(get_class());
        }
    } // namespace WaterCurrentController
} // namespace app::classes::types
