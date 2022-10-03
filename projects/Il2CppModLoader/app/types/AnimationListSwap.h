#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationListSwap {
        namespace {
            app::AnimationListSwap__Class* type_info_ref = nullptr;
        }
        app::AnimationListSwap__Class** type_info = &type_info_ref;
        inline app::AnimationListSwap__Class* get_class() {
            return il2cpp::get_class<app::AnimationListSwap__Class>(type_info, "", "AnimationListSwap");
        }
        inline app::AnimationListSwap* create() {
            return il2cpp::create_object<app::AnimationListSwap>(get_class());
        }
    } // namespace AnimationListSwap
} // namespace app::classes::types
