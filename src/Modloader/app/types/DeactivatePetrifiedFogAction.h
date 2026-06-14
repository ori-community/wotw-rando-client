#pragma once
#include <Modloader/app/structs/DeactivatePetrifiedFogAction.h>
#include <Modloader/app/structs/DeactivatePetrifiedFogAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeactivatePetrifiedFogAction {
        inline app::DeactivatePetrifiedFogAction__Class** type_info() {
            static app::DeactivatePetrifiedFogAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeactivatePetrifiedFogAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeactivatePetrifiedFogAction__Class* get_class() {
            return il2cpp::get_class<app::DeactivatePetrifiedFogAction__Class>(type_info(), "", "DeactivatePetrifiedFogAction");
        }
        inline app::DeactivatePetrifiedFogAction* create() {
            return il2cpp::create_object<app::DeactivatePetrifiedFogAction>(get_class());
        }
    } // namespace DeactivatePetrifiedFogAction
} // namespace app::classes::types
