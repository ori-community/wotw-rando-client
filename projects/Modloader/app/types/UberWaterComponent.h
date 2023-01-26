#pragma once
#include <Modloader/app/structs/UberWaterComponent.h>
#include <Modloader/app/structs/UberWaterComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterComponent {
        inline app::UberWaterComponent__Class** type_info() {
            static app::UberWaterComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterComponent__Class* get_class() {
            return il2cpp::get_class<app::UberWaterComponent__Class>(type_info(), "", "UberWaterComponent");
        }
        inline app::UberWaterComponent* create() {
            return il2cpp::create_object<app::UberWaterComponent>(get_class());
        }
    } // namespace UberWaterComponent
} // namespace app::classes::types
