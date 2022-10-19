#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransparentWallRevealedCondition {
        namespace {
            inline app::TransparentWallRevealedCondition__Class* type_info_ref = nullptr;
        }
        inline app::TransparentWallRevealedCondition__Class** type_info = &type_info_ref;
        inline app::TransparentWallRevealedCondition__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallRevealedCondition__Class>(type_info, "", "TransparentWallRevealedCondition");
        }
        inline app::TransparentWallRevealedCondition* create() {
            return il2cpp::create_object<app::TransparentWallRevealedCondition>(get_class());
        }
    } // namespace TransparentWallRevealedCondition
} // namespace app::classes::types
