#pragma once
#include <Modloader/app/structs/UberWaterRandomActor.h>
#include <Modloader/app/structs/UberWaterRandomActor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterRandomActor {
        inline app::UberWaterRandomActor__Class** type_info() {
            static app::UberWaterRandomActor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterRandomActor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterRandomActor__Class* get_class() {
            return il2cpp::get_class<app::UberWaterRandomActor__Class>(type_info(), "", "UberWaterRandomActor");
        }
        inline app::UberWaterRandomActor* create() {
            return il2cpp::create_object<app::UberWaterRandomActor>(get_class());
        }
    } // namespace UberWaterRandomActor
} // namespace app::classes::types
