#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PurchaseThingScreen {
        namespace {
            app::PurchaseThingScreen__Class* type_info_ref = nullptr;
        }
        app::PurchaseThingScreen__Class** type_info = &type_info_ref;
        inline app::PurchaseThingScreen__Class* get_class() {
            return il2cpp::get_class<app::PurchaseThingScreen__Class>(type_info, "", "PurchaseThingScreen");
        }
        inline app::PurchaseThingScreen* create() {
            return il2cpp::create_object<app::PurchaseThingScreen>(get_class());
        }
    } // namespace PurchaseThingScreen
} // namespace app::classes::types
