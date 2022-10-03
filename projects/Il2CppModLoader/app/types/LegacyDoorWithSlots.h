#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyDoorWithSlots {
        namespace {
            app::LegacyDoorWithSlots__Class* type_info_ref = nullptr;
        }
        app::LegacyDoorWithSlots__Class** type_info = &type_info_ref;
        inline app::LegacyDoorWithSlots__Class* get_class() {
            return il2cpp::get_class<app::LegacyDoorWithSlots__Class>(type_info, "", "LegacyDoorWithSlots");
        }
        inline app::LegacyDoorWithSlots* create() {
            return il2cpp::create_object<app::LegacyDoorWithSlots>(get_class());
        }
    } // namespace LegacyDoorWithSlots
} // namespace app::classes::types
