#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoorUberStatePair {
        namespace {
            app::DoorUberStatePair__Class* type_info_ref = nullptr;
        }
        app::DoorUberStatePair__Class** type_info = &type_info_ref;
        inline app::DoorUberStatePair__Class* get_class() {
            return il2cpp::get_class<app::DoorUberStatePair__Class>(type_info, "", "DoorUberStatePair");
        }
        inline app::DoorUberStatePair* create() {
            return il2cpp::create_object<app::DoorUberStatePair>(get_class());
        }
    } // namespace DoorUberStatePair
} // namespace app::classes::types
