#pragma once
#include <Modloader/app/structs/PlayerInSphereChecker.h>
#include <Modloader/app/structs/PlayerInSphereChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInSphereChecker {
        inline app::PlayerInSphereChecker__Class** type_info() {
            static app::PlayerInSphereChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerInSphereChecker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerInSphereChecker__Class* get_class() {
            return il2cpp::get_class<app::PlayerInSphereChecker__Class>(type_info(), "", "PlayerInSphereChecker");
        }
        inline app::PlayerInSphereChecker* create() {
            return il2cpp::create_object<app::PlayerInSphereChecker>(get_class());
        }
    } // namespace PlayerInSphereChecker
} // namespace app::classes::types
