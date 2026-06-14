#pragma once
#include <Modloader/app/structs/PlayerInsideZoneChecker__Array.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInsideZoneChecker__Array {
        inline app::PlayerInsideZoneChecker__Array__Class** type_info() {
            static app::PlayerInsideZoneChecker__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerInsideZoneChecker__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerInsideZoneChecker__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerInsideZoneChecker__Array__Class>(type_info(), "", "PlayerInsideZoneChecker[]");
        }
        inline app::PlayerInsideZoneChecker__Array* create() {
            return il2cpp::create_object<app::PlayerInsideZoneChecker__Array>(get_class());
        }
    } // namespace PlayerInsideZoneChecker__Array
} // namespace app::classes::types
