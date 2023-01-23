#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletUndergroundPlantController__Class.h>
#include <Modloader/app/structs/VerletUndergroundPlantController.h>

namespace app::classes::types {
    namespace VerletUndergroundPlantController {
        namespace {
            inline app::VerletUndergroundPlantController__Class* type_info_ref = nullptr;
        }
        inline app::VerletUndergroundPlantController__Class** type_info = &type_info_ref;
        inline app::VerletUndergroundPlantController__Class* get_class() {
            return il2cpp::get_class<app::VerletUndergroundPlantController__Class>(type_info, "", "VerletUndergroundPlantController");
        }
        inline app::VerletUndergroundPlantController* create() {
            return il2cpp::create_object<app::VerletUndergroundPlantController>(get_class());
        }
    } // namespace VerletUndergroundPlantController
} // namespace app::classes::types
