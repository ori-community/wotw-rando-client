#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyBabyWaterWorm__Class.h>
#include <Modloader/app/structs/LegacyBabyWaterWorm.h>

namespace app::classes::types {
    namespace LegacyBabyWaterWorm {
        namespace {
            inline app::LegacyBabyWaterWorm__Class* type_info_ref = nullptr;
        }
        inline app::LegacyBabyWaterWorm__Class** type_info = &type_info_ref;
        inline app::LegacyBabyWaterWorm__Class* get_class() {
            return il2cpp::get_class<app::LegacyBabyWaterWorm__Class>(type_info, "", "LegacyBabyWaterWorm");
        }
        inline app::LegacyBabyWaterWorm* create() {
            return il2cpp::create_object<app::LegacyBabyWaterWorm>(get_class());
        }
    } // namespace LegacyBabyWaterWorm
} // namespace app::classes::types
