#pragma once
#include <Modloader/app/structs/PlayerStateMap.h>
#include <Modloader/app/structs/PlayerStateMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStateMap {
        inline app::PlayerStateMap__Class** type_info() {
            static app::PlayerStateMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerStateMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerStateMap__Class* get_class() {
            return il2cpp::get_class<app::PlayerStateMap__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerStateMap");
        }
        inline app::PlayerStateMap* create() {
            return il2cpp::create_object<app::PlayerStateMap>(get_class());
        }
    } // namespace PlayerStateMap
} // namespace app::classes::types
