#pragma once
#include <Modloader/app/structs/AnimationTester_AnimationTestEntry__Array.h>
#include <Modloader/app/structs/AnimationTester_AnimationTestEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_AnimationTestEntry__Array {
        inline app::AnimationTester_AnimationTestEntry__Array__Class** type_info() {
            static app::AnimationTester_AnimationTestEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationTester_AnimationTestEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationTester_AnimationTestEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationTester_AnimationTestEntry__Array__Class>(type_info(), "", "AnimationTester+AnimationTestEntry[]");
        }
        inline app::AnimationTester_AnimationTestEntry__Array* create() {
            return il2cpp::create_object<app::AnimationTester_AnimationTestEntry__Array>(get_class());
        }
    } // namespace AnimationTester_AnimationTestEntry__Array
} // namespace app::classes::types
