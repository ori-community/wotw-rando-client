#pragma once
#include <Modloader/app/structs/OriPhysicsPostprocessTest.h>
#include <Modloader/app/structs/OriPhysicsPostprocessTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriPhysicsPostprocessTest {
        inline app::OriPhysicsPostprocessTest__Class** type_info() {
            static app::OriPhysicsPostprocessTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriPhysicsPostprocessTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriPhysicsPostprocessTest__Class* get_class() {
            return il2cpp::get_class<app::OriPhysicsPostprocessTest__Class>(type_info(), "", "OriPhysicsPostprocessTest");
        }
        inline app::OriPhysicsPostprocessTest* create() {
            return il2cpp::create_object<app::OriPhysicsPostprocessTest>(get_class());
        }
    } // namespace OriPhysicsPostprocessTest
} // namespace app::classes::types
