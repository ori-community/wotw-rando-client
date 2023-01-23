#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberWaterComponent__Class.h>
#include <Modloader/app/structs/UberWaterComponent.h>

namespace app::classes::types {
    namespace UberWaterComponent {
        namespace {
            inline app::UberWaterComponent__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterComponent__Class** type_info = &type_info_ref;
        inline app::UberWaterComponent__Class* get_class() {
            return il2cpp::get_class<app::UberWaterComponent__Class>(type_info, "", "UberWaterComponent");
        }
        inline app::UberWaterComponent* create() {
            return il2cpp::create_object<app::UberWaterComponent>(get_class());
        }
    } // namespace UberWaterComponent
} // namespace app::classes::types
