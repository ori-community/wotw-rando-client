#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PurchaseThingScreen__Class.h>
#include <Modloader/app/structs/PurchaseThingScreen.h>

namespace app::classes::types {
    namespace PurchaseThingScreen {
        namespace {
            inline app::PurchaseThingScreen__Class* type_info_ref = nullptr;
        }
        inline app::PurchaseThingScreen__Class** type_info = &type_info_ref;
        inline app::PurchaseThingScreen__Class* get_class() {
            return il2cpp::get_class<app::PurchaseThingScreen__Class>(type_info, "", "PurchaseThingScreen");
        }
        inline app::PurchaseThingScreen* create() {
            return il2cpp::create_object<app::PurchaseThingScreen>(get_class());
        }
    } // namespace PurchaseThingScreen
} // namespace app::classes::types
