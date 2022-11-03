#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PoisonousWaterDrip {
        namespace {
            inline app::PoisonousWaterDrip__Class* type_info_ref = nullptr;
        }
        inline app::PoisonousWaterDrip__Class** type_info = &type_info_ref;
        inline app::PoisonousWaterDrip__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterDrip__Class>(type_info, "", "PoisonousWaterDrip");
        }
        inline app::PoisonousWaterDrip* create() {
            return il2cpp::create_object<app::PoisonousWaterDrip>(get_class());
        }
    } // namespace PoisonousWaterDrip
} // namespace app::classes::types
