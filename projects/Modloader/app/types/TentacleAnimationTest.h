#pragma once
#include <Modloader/app/structs/TentacleAnimationTest.h>
#include <Modloader/app/structs/TentacleAnimationTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleAnimationTest {
        inline app::TentacleAnimationTest__Class** type_info() {
            static app::TentacleAnimationTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleAnimationTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleAnimationTest__Class* get_class() {
            return il2cpp::get_class<app::TentacleAnimationTest__Class>(type_info(), "", "TentacleAnimationTest");
        }
        inline app::TentacleAnimationTest* create() {
            return il2cpp::create_object<app::TentacleAnimationTest>(get_class());
        }
    } // namespace TentacleAnimationTest
} // namespace app::classes::types
