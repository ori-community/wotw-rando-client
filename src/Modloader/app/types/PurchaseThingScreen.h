#pragma once
#include <Modloader/app/structs/PurchaseThingScreen.h>
#include <Modloader/app/structs/PurchaseThingScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PurchaseThingScreen {
        inline app::PurchaseThingScreen__Class** type_info() {
            static app::PurchaseThingScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PurchaseThingScreen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PurchaseThingScreen__Class* get_class() {
            return il2cpp::get_class<app::PurchaseThingScreen__Class>(type_info(), "", "PurchaseThingScreen");
        }
        inline app::PurchaseThingScreen* create() {
            return il2cpp::create_object<app::PurchaseThingScreen>(get_class());
        }
    } // namespace PurchaseThingScreen
} // namespace app::classes::types
