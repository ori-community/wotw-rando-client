#pragma once
#include <Modloader/app/structs/PlayerInRangeChecker.h>
#include <Modloader/app/structs/PlayerInRangeChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInRangeChecker {
        inline app::PlayerInRangeChecker__Class** type_info() {
            static app::PlayerInRangeChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerInRangeChecker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerInRangeChecker__Class* get_class() {
            return il2cpp::get_class<app::PlayerInRangeChecker__Class>(type_info(), "", "PlayerInRangeChecker");
        }
        inline app::PlayerInRangeChecker* create() {
            return il2cpp::create_object<app::PlayerInRangeChecker>(get_class());
        }
    } // namespace PlayerInRangeChecker
} // namespace app::classes::types
