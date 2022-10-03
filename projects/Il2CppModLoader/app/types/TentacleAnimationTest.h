#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleAnimationTest {
        namespace {
            app::TentacleAnimationTest__Class* type_info_ref = nullptr;
        }
        app::TentacleAnimationTest__Class** type_info = &type_info_ref;
        inline app::TentacleAnimationTest__Class* get_class() {
            return il2cpp::get_class<app::TentacleAnimationTest__Class>(type_info, "", "TentacleAnimationTest");
        }
        inline app::TentacleAnimationTest* create() {
            return il2cpp::create_object<app::TentacleAnimationTest>(get_class());
        }
    } // namespace TentacleAnimationTest
} // namespace app::classes::types
