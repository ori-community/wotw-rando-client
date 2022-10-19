#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayLoopAnimation {
        namespace {
            inline app::PlayLoopAnimation__Class* type_info_ref = nullptr;
        }
        inline app::PlayLoopAnimation__Class** type_info = &type_info_ref;
        inline app::PlayLoopAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayLoopAnimation__Class>(type_info, "", "PlayLoopAnimation");
        }
        inline app::PlayLoopAnimation* create() {
            return il2cpp::create_object<app::PlayLoopAnimation>(get_class());
        }
    } // namespace PlayLoopAnimation
} // namespace app::classes::types
