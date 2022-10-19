#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayAnimatorBasedOnNightberry {
        namespace {
            inline app::PlayAnimatorBasedOnNightberry__Class* type_info_ref = nullptr;
        }
        inline app::PlayAnimatorBasedOnNightberry__Class** type_info = &type_info_ref;
        inline app::PlayAnimatorBasedOnNightberry__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimatorBasedOnNightberry__Class>(type_info, "", "PlayAnimatorBasedOnNightberry");
        }
        inline app::PlayAnimatorBasedOnNightberry* create() {
            return il2cpp::create_object<app::PlayAnimatorBasedOnNightberry>(get_class());
        }
    } // namespace PlayAnimatorBasedOnNightberry
} // namespace app::classes::types
