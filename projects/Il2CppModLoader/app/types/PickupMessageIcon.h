#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PickupMessageIcon {
        namespace {
            app::PickupMessageIcon__Class* type_info_ref = nullptr;
        }
        app::PickupMessageIcon__Class** type_info = &type_info_ref;
        inline app::PickupMessageIcon__Class* get_class() {
            return il2cpp::get_class<app::PickupMessageIcon__Class>(type_info, "", "PickupMessageIcon");
        }
        inline app::PickupMessageIcon* create() {
            return il2cpp::create_object<app::PickupMessageIcon>(get_class());
        }
    } // namespace PickupMessageIcon
} // namespace app::classes::types
