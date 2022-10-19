#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowStoryTextAnimator {
        namespace {
            inline app::ShowStoryTextAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ShowStoryTextAnimator__Class** type_info = &type_info_ref;
        inline app::ShowStoryTextAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShowStoryTextAnimator__Class>(type_info, "", "ShowStoryTextAnimator");
        }
        inline app::ShowStoryTextAnimator* create() {
            return il2cpp::create_object<app::ShowStoryTextAnimator>(get_class());
        }
    } // namespace ShowStoryTextAnimator
} // namespace app::classes::types
