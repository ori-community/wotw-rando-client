#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayLoopAnimationWisps {
        namespace {
            inline app::PlayLoopAnimationWisps__Class* type_info_ref = nullptr;
        }
        inline app::PlayLoopAnimationWisps__Class** type_info = &type_info_ref;
        inline app::PlayLoopAnimationWisps__Class* get_class() {
            return il2cpp::get_class<app::PlayLoopAnimationWisps__Class>(type_info, "", "PlayLoopAnimationWisps");
        }
        inline app::PlayLoopAnimationWisps* create() {
            return il2cpp::create_object<app::PlayLoopAnimationWisps>(get_class());
        }
    } // namespace PlayLoopAnimationWisps
} // namespace app::classes::types
