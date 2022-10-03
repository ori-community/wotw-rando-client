#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonDoorSlot {
        namespace {
            app::MoonDoorSlot__Class* type_info_ref = nullptr;
        }
        app::MoonDoorSlot__Class** type_info = &type_info_ref;
        inline app::MoonDoorSlot__Class* get_class() {
            return il2cpp::get_class<app::MoonDoorSlot__Class>(type_info, "", "MoonDoorSlot");
        }
        inline app::MoonDoorSlot* create() {
            return il2cpp::create_object<app::MoonDoorSlot>(get_class());
        }
    } // namespace MoonDoorSlot
} // namespace app::classes::types
