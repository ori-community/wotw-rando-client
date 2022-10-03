#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriPhysicsPostprocessTest {
        namespace {
            app::OriPhysicsPostprocessTest__Class* type_info_ref = nullptr;
        }
        app::OriPhysicsPostprocessTest__Class** type_info = &type_info_ref;
        inline app::OriPhysicsPostprocessTest__Class* get_class() {
            return il2cpp::get_class<app::OriPhysicsPostprocessTest__Class>(type_info, "", "OriPhysicsPostprocessTest");
        }
        inline app::OriPhysicsPostprocessTest* create() {
            return il2cpp::create_object<app::OriPhysicsPostprocessTest>(get_class());
        }
    } // namespace OriPhysicsPostprocessTest
} // namespace app::classes::types
