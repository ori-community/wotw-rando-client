#pragma once
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker__Array.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInsideZoneChecker {
        inline app::PlayerInsideZoneChecker__Class** type_info() {
            static app::PlayerInsideZoneChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerInsideZoneChecker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerInsideZoneChecker__Class* get_class() {
            return il2cpp::get_class<app::PlayerInsideZoneChecker__Class>(type_info(), "", "PlayerInsideZoneChecker");
        }
        inline app::PlayerInsideZoneChecker* create() {
            return il2cpp::create_object<app::PlayerInsideZoneChecker>(get_class());
        }
        inline app::PlayerInsideZoneChecker__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerInsideZoneChecker__Array>(get_class(), size);
        }
        inline app::PlayerInsideZoneChecker__Array* create_array(const std::vector<app::PlayerInsideZoneChecker*>& items) {
            return il2cpp::array_new<app::PlayerInsideZoneChecker__Array>(get_class(), items);
        }
    } // namespace PlayerInsideZoneChecker
} // namespace app::classes::types
