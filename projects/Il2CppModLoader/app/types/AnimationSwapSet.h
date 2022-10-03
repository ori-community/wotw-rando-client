#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationSwapSet {
        namespace {
            app::AnimationSwapSet__Class* type_info_ref = nullptr;
        }
        app::AnimationSwapSet__Class** type_info = &type_info_ref;
        inline app::AnimationSwapSet__Class* get_class() {
            return il2cpp::get_class<app::AnimationSwapSet__Class>(type_info, "", "AnimationSwapSet");
        }
        inline app::AnimationSwapSet* create() {
            return il2cpp::create_object<app::AnimationSwapSet>(get_class());
        }
    } // namespace AnimationSwapSet
} // namespace app::classes::types
