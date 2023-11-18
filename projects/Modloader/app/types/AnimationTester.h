#pragma once
#include <Modloader/app/structs/AnimationTester.h>
#include <Modloader/app/structs/AnimationTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTester {
        inline app::AnimationTester__Class** type_info() {
            static app::AnimationTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationTester__Class* get_class() {
            return il2cpp::get_class<app::AnimationTester__Class>(type_info(), "", "AnimationTester");
        }
        inline app::AnimationTester* create() {
            return il2cpp::create_object<app::AnimationTester>(get_class());
        }
    } // namespace AnimationTester
} // namespace app::classes::types
