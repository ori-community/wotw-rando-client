#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationEntry__Array {
        namespace {
            inline app::AnimationEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationEntry__Array__Class** type_info = &type_info_ref;
        inline app::AnimationEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationEntry__Array__Class>(type_info, "", "AnimationEntry[]");
        }
        inline app::AnimationEntry__Array* create() {
            return il2cpp::create_object<app::AnimationEntry__Array>(get_class());
        }
    } // namespace AnimationEntry__Array
} // namespace app::classes::types
