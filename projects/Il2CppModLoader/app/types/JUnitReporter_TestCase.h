#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JUnitReporter_TestCase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JUnitReporter_TestCase__Class** type_info;
        inline app::JUnitReporter_TestCase__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_TestCase__Class>(type_info, "", "JUnitReporter", "TestCase");
        }
        inline app::JUnitReporter_TestCase* create() {
            return il2cpp::create_object<app::JUnitReporter_TestCase>(get_class());
        }
        inline app::JUnitReporter_TestCase__Array* create_array(int size) {
            return il2cpp::array_new<app::JUnitReporter_TestCase__Array>(get_class(), size);
        }
    } // namespace JUnitReporter_TestCase
} // namespace app::classes::types
