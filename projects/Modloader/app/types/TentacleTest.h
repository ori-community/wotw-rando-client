#pragma once
#include <Modloader/app/structs/TentacleTest.h>
#include <Modloader/app/structs/TentacleTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleTest {
        inline app::TentacleTest__Class** type_info() {
            static app::TentacleTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleTest__Class* get_class() {
            return il2cpp::get_class<app::TentacleTest__Class>(type_info(), "", "TentacleTest");
        }
        inline app::TentacleTest* create() {
            return il2cpp::create_object<app::TentacleTest>(get_class());
        }
    } // namespace TentacleTest
} // namespace app::classes::types
