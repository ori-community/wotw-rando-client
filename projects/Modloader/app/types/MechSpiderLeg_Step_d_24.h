#pragma once
#include <Modloader/app/structs/MechSpiderLeg_Step_d_24.h>
#include <Modloader/app/structs/MechSpiderLeg_Step_d_24__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MechSpiderLeg_Step_d_24 {
        inline app::MechSpiderLeg_Step_d_24__Class** type_info() {
            static app::MechSpiderLeg_Step_d_24__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MechSpiderLeg_Step_d_24__Class**)(modloader::win::memory::resolve_rva(0x0478F0B0));
            }
            return cache;
        }
        inline app::MechSpiderLeg_Step_d_24__Class* get_class() {
            return il2cpp::get_nested_class<app::MechSpiderLeg_Step_d_24__Class>(type_info(), "RootMotion.Demos", "MechSpiderLeg", "<Step>d__24");
        }
        inline app::MechSpiderLeg_Step_d_24* create() {
            return il2cpp::create_object<app::MechSpiderLeg_Step_d_24>(get_class());
        }
    } // namespace MechSpiderLeg_Step_d_24
} // namespace app::classes::types
