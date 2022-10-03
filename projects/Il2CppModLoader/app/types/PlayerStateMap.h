#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerStateMap {
        namespace {
            app::PlayerStateMap__Class* type_info_ref = nullptr;
        }
        app::PlayerStateMap__Class** type_info = &type_info_ref;
        inline app::PlayerStateMap__Class* get_class() {
            return il2cpp::get_class<app::PlayerStateMap__Class>(type_info, "Moon.uberSerializationWisp", "PlayerStateMap");
        }
        inline app::PlayerStateMap* create() {
            return il2cpp::create_object<app::PlayerStateMap>(get_class());
        }
    } // namespace PlayerStateMap
} // namespace app::classes::types
