#pragma once
#include <Modloader/app/structs/MistyWoodsKuroHideZoneAction.h>
#include <Modloader/app/structs/MistyWoodsKuroHideZoneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroHideZoneAction {
        inline app::MistyWoodsKuroHideZoneAction__Class** type_info() {
            static app::MistyWoodsKuroHideZoneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistyWoodsKuroHideZoneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistyWoodsKuroHideZoneAction__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroHideZoneAction__Class>(type_info(), "", "MistyWoodsKuroHideZoneAction");
        }
        inline app::MistyWoodsKuroHideZoneAction* create() {
            return il2cpp::create_object<app::MistyWoodsKuroHideZoneAction>(get_class());
        }
    } // namespace MistyWoodsKuroHideZoneAction
} // namespace app::classes::types
