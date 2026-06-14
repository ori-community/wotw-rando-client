#pragma once
#include <Modloader/app/structs/VerletUndergroundPlantController.h>
#include <Modloader/app/structs/VerletUndergroundPlantController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletUndergroundPlantController {
        inline app::VerletUndergroundPlantController__Class** type_info() {
            static app::VerletUndergroundPlantController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletUndergroundPlantController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletUndergroundPlantController__Class* get_class() {
            return il2cpp::get_class<app::VerletUndergroundPlantController__Class>(type_info(), "", "VerletUndergroundPlantController");
        }
        inline app::VerletUndergroundPlantController* create() {
            return il2cpp::create_object<app::VerletUndergroundPlantController>(get_class());
        }
    } // namespace VerletUndergroundPlantController
} // namespace app::classes::types
