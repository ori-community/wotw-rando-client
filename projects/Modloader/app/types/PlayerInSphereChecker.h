#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerInSphereChecker__Class.h>
#include <Modloader/app/structs/PlayerInSphereChecker.h>

namespace app::classes::types {
    namespace PlayerInSphereChecker {
        namespace {
            inline app::PlayerInSphereChecker__Class* type_info_ref = nullptr;
        }
        inline app::PlayerInSphereChecker__Class** type_info = &type_info_ref;
        inline app::PlayerInSphereChecker__Class* get_class() {
            return il2cpp::get_class<app::PlayerInSphereChecker__Class>(type_info, "", "PlayerInSphereChecker");
        }
        inline app::PlayerInSphereChecker* create() {
            return il2cpp::create_object<app::PlayerInSphereChecker>(get_class());
        }
    } // namespace PlayerInSphereChecker
} // namespace app::classes::types
