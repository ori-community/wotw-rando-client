#pragma once
#include <Modloader/app/structs/ExceptionsTest.h>
#include <Modloader/app/structs/ExceptionsTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionsTest {
        inline app::ExceptionsTest__Class** type_info() {
            static app::ExceptionsTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExceptionsTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExceptionsTest__Class* get_class() {
            return il2cpp::get_class<app::ExceptionsTest__Class>(type_info(), "", "ExceptionsTest");
        }
        inline app::ExceptionsTest* create() {
            return il2cpp::create_object<app::ExceptionsTest>(get_class());
        }
    } // namespace ExceptionsTest
} // namespace app::classes::types
