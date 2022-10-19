#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
