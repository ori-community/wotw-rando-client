#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InterfaceTest {
        namespace {
            app::InterfaceTest__Class* type_info_ref = nullptr;
        }
        app::InterfaceTest__Class** type_info = &type_info_ref;
        inline app::InterfaceTest__Class* get_class() {
            return il2cpp::get_class<app::InterfaceTest__Class>(type_info, "", "InterfaceTest");
        }
        inline app::InterfaceTest* create() {
            return il2cpp::create_object<app::InterfaceTest>(get_class());
        }
    } // namespace InterfaceTest
} // namespace app::classes::types
