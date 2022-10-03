#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlyToUserInterfaceSpot {
        namespace {
            app::FlyToUserInterfaceSpot__Class* type_info_ref = nullptr;
        }
        app::FlyToUserInterfaceSpot__Class** type_info = &type_info_ref;
        inline app::FlyToUserInterfaceSpot__Class* get_class() {
            return il2cpp::get_class<app::FlyToUserInterfaceSpot__Class>(type_info, "", "FlyToUserInterfaceSpot");
        }
        inline app::FlyToUserInterfaceSpot* create() {
            return il2cpp::create_object<app::FlyToUserInterfaceSpot>(get_class());
        }
    } // namespace FlyToUserInterfaceSpot
} // namespace app::classes::types
