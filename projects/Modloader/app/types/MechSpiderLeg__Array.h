#pragma once
#include <Modloader/app/structs/MechSpiderLeg__Array.h>
#include <Modloader/app/structs/MechSpiderLeg__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MechSpiderLeg__Array {
        inline app::MechSpiderLeg__Array__Class** type_info() {
            static app::MechSpiderLeg__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MechSpiderLeg__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MechSpiderLeg__Array__Class* get_class() {
            return il2cpp::get_class<app::MechSpiderLeg__Array__Class>(type_info(), "RootMotion.Demos", "MechSpiderLeg[]");
        }
        inline app::MechSpiderLeg__Array* create() {
            return il2cpp::create_object<app::MechSpiderLeg__Array>(get_class());
        }
    } // namespace MechSpiderLeg__Array
} // namespace app::classes::types
