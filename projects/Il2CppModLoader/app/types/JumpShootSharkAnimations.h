#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpShootSharkAnimations {
        namespace {
            inline app::JumpShootSharkAnimations__Class* type_info_ref = nullptr;
        }
        inline app::JumpShootSharkAnimations__Class** type_info = &type_info_ref;
        inline app::JumpShootSharkAnimations__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkAnimations__Class>(type_info, "", "JumpShootSharkAnimations");
        }
        inline app::JumpShootSharkAnimations* create() {
            return il2cpp::create_object<app::JumpShootSharkAnimations>(get_class());
        }
    } // namespace JumpShootSharkAnimations
} // namespace app::classes::types
