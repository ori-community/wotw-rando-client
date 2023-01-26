#pragma once
#include <Modloader/app/structs/MistyWoodsKuroGameplayController.h>
#include <Modloader/app/structs/MistyWoodsKuroGameplayController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroGameplayController {
        inline app::MistyWoodsKuroGameplayController__Class** type_info() {
            static app::MistyWoodsKuroGameplayController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistyWoodsKuroGameplayController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistyWoodsKuroGameplayController__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroGameplayController__Class>(type_info(), "", "MistyWoodsKuroGameplayController");
        }
        inline app::MistyWoodsKuroGameplayController* create() {
            return il2cpp::create_object<app::MistyWoodsKuroGameplayController>(get_class());
        }
    } // namespace MistyWoodsKuroGameplayController
} // namespace app::classes::types
