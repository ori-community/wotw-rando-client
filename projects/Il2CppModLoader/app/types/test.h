#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace test {
        namespace {
            app::test__Class* type_info_ref = nullptr;
        }
        app::test__Class** type_info = &type_info_ref;
        inline app::test__Class* get_class() {
            return il2cpp::get_class<app::test__Class>(type_info, "", "test");
        }
        inline app::test* create() {
            return il2cpp::create_object<app::test>(get_class());
        }
    } // namespace test
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Test {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Test__Class** type_info;
        inline app::Test__Class* get_class() {
            return il2cpp::get_class<app::Test__Class>(type_info, "", "Test");
        }
        inline app::Test* create() {
            return il2cpp::create_object<app::Test>(get_class());
        }
        inline app::Test__Array* create_array(int size) {
            return il2cpp::array_new<app::Test__Array>(get_class(), size);
        }
    } // namespace Test
} // namespace app::classes::types
