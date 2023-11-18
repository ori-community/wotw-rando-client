#pragma once
#include <Modloader/app/structs/MistyWoodsKuroController.h>
#include <Modloader/app/structs/MistyWoodsKuroController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroController {
        inline app::MistyWoodsKuroController__Class** type_info() {
            static app::MistyWoodsKuroController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistyWoodsKuroController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistyWoodsKuroController__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroController__Class>(type_info(), "", "MistyWoodsKuroController");
        }
        inline app::MistyWoodsKuroController* create() {
            return il2cpp::create_object<app::MistyWoodsKuroController>(get_class());
        }
    } // namespace MistyWoodsKuroController
} // namespace app::classes::types
