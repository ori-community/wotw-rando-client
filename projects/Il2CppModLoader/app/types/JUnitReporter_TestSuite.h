#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JUnitReporter_TestSuite {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JUnitReporter_TestSuite__Class** type_info;
        inline app::JUnitReporter_TestSuite__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_TestSuite__Class>(type_info, "", "JUnitReporter", "TestSuite");
        }
        inline app::JUnitReporter_TestSuite* create() {
            return il2cpp::create_object<app::JUnitReporter_TestSuite>(get_class());
        }
        inline app::JUnitReporter_TestSuite__Array* create_array(int size) {
            return il2cpp::array_new<app::JUnitReporter_TestSuite__Array>(get_class(), size);
        }
    } // namespace JUnitReporter_TestSuite
} // namespace app::classes::types
