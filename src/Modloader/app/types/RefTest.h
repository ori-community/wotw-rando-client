#pragma once
#include <Modloader/app/structs/RefTest.h>
#include <Modloader/app/structs/RefTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RefTest {
        inline app::RefTest__Class** type_info() {
            static app::RefTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RefTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RefTest__Class* get_class() {
            return il2cpp::get_class<app::RefTest__Class>(type_info(), "", "RefTest");
        }
        inline app::RefTest* create() {
            return il2cpp::create_object<app::RefTest>(get_class());
        }
    } // namespace RefTest
} // namespace app::classes::types
