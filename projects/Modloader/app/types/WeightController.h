#pragma once
#include <Modloader/app/structs/WeightController.h>
#include <Modloader/app/structs/WeightController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeightController {
        inline app::WeightController__Class** type_info() {
            static app::WeightController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WeightController__Class**)(modloader::win::memory::resolve_rva(0x0473F400));
            }
            return cache;
        }
        inline app::WeightController__Class* get_class() {
            return il2cpp::get_class<app::WeightController__Class>(type_info(), "", "WeightController");
        }
        inline app::WeightController* create() {
            return il2cpp::create_object<app::WeightController>(get_class());
        }
    } // namespace WeightController
} // namespace app::classes::types
