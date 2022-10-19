#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicAnimationPlayer {
        namespace {
            inline app::DynamicAnimationPlayer__Class* type_info_ref = nullptr;
        }
        inline app::DynamicAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::DynamicAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::DynamicAnimationPlayer__Class>(type_info, "Moon", "DynamicAnimationPlayer");
        }
        inline app::DynamicAnimationPlayer* create() {
            return il2cpp::create_object<app::DynamicAnimationPlayer>(get_class());
        }
    } // namespace DynamicAnimationPlayer
} // namespace app::classes::types
