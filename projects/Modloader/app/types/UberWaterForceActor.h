#pragma once
#include <Modloader/app/structs/UberWaterForceActor.h>
#include <Modloader/app/structs/UberWaterForceActor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterForceActor {
        inline app::UberWaterForceActor__Class** type_info() {
            static app::UberWaterForceActor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterForceActor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterForceActor__Class* get_class() {
            return il2cpp::get_class<app::UberWaterForceActor__Class>(type_info(), "", "UberWaterForceActor");
        }
        inline app::UberWaterForceActor* create() {
            return il2cpp::create_object<app::UberWaterForceActor>(get_class());
        }
    } // namespace UberWaterForceActor
} // namespace app::classes::types
