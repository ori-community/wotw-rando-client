#pragma once
#include <Modloader/app/structs/FlyToUserInterfaceSpot.h>
#include <Modloader/app/structs/FlyToUserInterfaceSpot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlyToUserInterfaceSpot {
        inline app::FlyToUserInterfaceSpot__Class** type_info() {
            static app::FlyToUserInterfaceSpot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlyToUserInterfaceSpot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlyToUserInterfaceSpot__Class* get_class() {
            return il2cpp::get_class<app::FlyToUserInterfaceSpot__Class>(type_info(), "", "FlyToUserInterfaceSpot");
        }
        inline app::FlyToUserInterfaceSpot* create() {
            return il2cpp::create_object<app::FlyToUserInterfaceSpot>(get_class());
        }
    } // namespace FlyToUserInterfaceSpot
} // namespace app::classes::types
