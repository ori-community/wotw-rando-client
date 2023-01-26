#pragma once
#include <Modloader/app/structs/MistyWoodsKuroController_Animations.h>
#include <Modloader/app/structs/MistyWoodsKuroController_Animations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroController_Animations {
        inline app::MistyWoodsKuroController_Animations__Class** type_info() {
            static app::MistyWoodsKuroController_Animations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistyWoodsKuroController_Animations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistyWoodsKuroController_Animations__Class* get_class() {
            return il2cpp::get_nested_class<app::MistyWoodsKuroController_Animations__Class>(type_info(), "", "MistyWoodsKuroController", "Animations");
        }
        inline app::MistyWoodsKuroController_Animations* create() {
            return il2cpp::create_object<app::MistyWoodsKuroController_Animations>(get_class());
        }
    } // namespace MistyWoodsKuroController_Animations
} // namespace app::classes::types
