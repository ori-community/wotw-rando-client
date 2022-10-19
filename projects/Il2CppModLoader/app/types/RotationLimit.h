#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotationLimit {
        namespace {
            inline app::RotationLimit__Class* type_info_ref = nullptr;
        }
        inline app::RotationLimit__Class** type_info = &type_info_ref;
        inline app::RotationLimit__Class* get_class() {
            return il2cpp::get_class<app::RotationLimit__Class>(type_info, "RootMotion.FinalIK", "RotationLimit");
        }
        inline app::RotationLimit* create() {
            return il2cpp::create_object<app::RotationLimit>(get_class());
        }
    } // namespace RotationLimit
} // namespace app::classes::types
