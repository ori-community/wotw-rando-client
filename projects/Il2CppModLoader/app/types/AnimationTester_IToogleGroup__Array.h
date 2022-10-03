#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_IToogleGroup__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationTester_IToogleGroup__Array__Class** type_info;
        inline app::AnimationTester_IToogleGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationTester_IToogleGroup__Array__Class>(type_info, "", "AnimationTester+IToogleGroup[]");
        }
        inline app::AnimationTester_IToogleGroup__Array* create() {
            return il2cpp::create_object<app::AnimationTester_IToogleGroup__Array>(get_class());
        }
    } // namespace AnimationTester_IToogleGroup__Array
} // namespace app::classes::types
