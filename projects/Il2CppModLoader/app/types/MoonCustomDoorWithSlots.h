#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonCustomDoorWithSlots {
        namespace {
            app::MoonCustomDoorWithSlots__Class* type_info_ref = nullptr;
        }
        app::MoonCustomDoorWithSlots__Class** type_info = &type_info_ref;
        inline app::MoonCustomDoorWithSlots__Class* get_class() {
            return il2cpp::get_class<app::MoonCustomDoorWithSlots__Class>(type_info, "", "MoonCustomDoorWithSlots");
        }
        inline app::MoonCustomDoorWithSlots* create() {
            return il2cpp::create_object<app::MoonCustomDoorWithSlots>(get_class());
        }
    } // namespace MoonCustomDoorWithSlots
} // namespace app::classes::types
