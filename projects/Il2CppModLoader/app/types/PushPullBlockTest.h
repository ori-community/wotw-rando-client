#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PushPullBlockTest {
        namespace {
            app::PushPullBlockTest__Class* type_info_ref = nullptr;
        }
        app::PushPullBlockTest__Class** type_info = &type_info_ref;
        inline app::PushPullBlockTest__Class* get_class() {
            return il2cpp::get_class<app::PushPullBlockTest__Class>(type_info, "", "PushPullBlockTest");
        }
        inline app::PushPullBlockTest* create() {
            return il2cpp::create_object<app::PushPullBlockTest>(get_class());
        }
    } // namespace PushPullBlockTest
} // namespace app::classes::types
