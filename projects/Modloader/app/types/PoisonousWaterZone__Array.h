#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PoisonousWaterZone__Array__Class.h>
#include <Modloader/app/structs/PoisonousWaterZone__Array.h>

namespace app::classes::types {
    namespace PoisonousWaterZone__Array {
        namespace {
            inline app::PoisonousWaterZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::PoisonousWaterZone__Array__Class** type_info = &type_info_ref;
        inline app::PoisonousWaterZone__Array__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterZone__Array__Class>(type_info, "", "PoisonousWaterZone[]");
        }
        inline app::PoisonousWaterZone__Array* create() {
            return il2cpp::create_object<app::PoisonousWaterZone__Array>(get_class());
        }
    } // namespace PoisonousWaterZone__Array
} // namespace app::classes::types
