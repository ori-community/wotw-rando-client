#pragma once
#include <Modloader/app/structs/PushPullBlockTest.h>
#include <Modloader/app/structs/PushPullBlockTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushPullBlockTest {
        inline app::PushPullBlockTest__Class** type_info() {
            static app::PushPullBlockTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushPullBlockTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushPullBlockTest__Class* get_class() {
            return il2cpp::get_class<app::PushPullBlockTest__Class>(type_info(), "", "PushPullBlockTest");
        }
        inline app::PushPullBlockTest* create() {
            return il2cpp::create_object<app::PushPullBlockTest>(get_class());
        }
    } // namespace PushPullBlockTest
} // namespace app::classes::types
