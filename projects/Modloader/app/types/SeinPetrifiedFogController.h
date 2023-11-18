#pragma once
#include <Modloader/app/structs/SeinPetrifiedFogController.h>
#include <Modloader/app/structs/SeinPetrifiedFogController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPetrifiedFogController {
        inline app::SeinPetrifiedFogController__Class** type_info() {
            static app::SeinPetrifiedFogController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPetrifiedFogController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPetrifiedFogController__Class* get_class() {
            return il2cpp::get_class<app::SeinPetrifiedFogController__Class>(type_info(), "", "SeinPetrifiedFogController");
        }
        inline app::SeinPetrifiedFogController* create() {
            return il2cpp::create_object<app::SeinPetrifiedFogController>(get_class());
        }
    } // namespace SeinPetrifiedFogController
} // namespace app::classes::types
