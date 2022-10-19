#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationTester_AnimationTestEntry__Array {
        namespace {
            inline app::AnimationTester_AnimationTestEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationTester_AnimationTestEntry__Array__Class** type_info = &type_info_ref;
        inline app::AnimationTester_AnimationTestEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationTester_AnimationTestEntry__Array__Class>(type_info, "", "AnimationTester+AnimationTestEntry[]");
        }
        inline app::AnimationTester_AnimationTestEntry__Array* create() {
            return il2cpp::create_object<app::AnimationTester_AnimationTestEntry__Array>(get_class());
        }
    } // namespace AnimationTester_AnimationTestEntry__Array
} // namespace app::classes::types
