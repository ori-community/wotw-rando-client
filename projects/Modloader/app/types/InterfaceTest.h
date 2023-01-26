#pragma once
#include <Modloader/app/structs/InterfaceTest.h>
#include <Modloader/app/structs/InterfaceTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterfaceTest {
        inline app::InterfaceTest__Class** type_info() {
            static app::InterfaceTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InterfaceTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InterfaceTest__Class* get_class() {
            return il2cpp::get_class<app::InterfaceTest__Class>(type_info(), "", "InterfaceTest");
        }
        inline app::InterfaceTest* create() {
            return il2cpp::create_object<app::InterfaceTest>(get_class());
        }
    } // namespace InterfaceTest
} // namespace app::classes::types
