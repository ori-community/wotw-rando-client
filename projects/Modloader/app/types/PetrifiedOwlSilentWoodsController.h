#pragma once
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController {
        inline app::PetrifiedOwlSilentWoodsController__Class** type_info() {
            static app::PetrifiedOwlSilentWoodsController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlSilentWoodsController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlSilentWoodsController__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlSilentWoodsController__Class>(type_info(), "", "PetrifiedOwlSilentWoodsController");
        }
        inline app::PetrifiedOwlSilentWoodsController* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController
} // namespace app::classes::types
