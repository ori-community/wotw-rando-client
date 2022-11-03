#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleAnimationTest {
        namespace {
            inline app::TentacleAnimationTest__Class* type_info_ref = nullptr;
        }
        inline app::TentacleAnimationTest__Class** type_info = &type_info_ref;
        inline app::TentacleAnimationTest__Class* get_class() {
            return il2cpp::get_class<app::TentacleAnimationTest__Class>(type_info, "", "TentacleAnimationTest");
        }
        inline app::TentacleAnimationTest* create() {
            return il2cpp::create_object<app::TentacleAnimationTest>(get_class());
        }
    } // namespace TentacleAnimationTest
} // namespace app::classes::types
