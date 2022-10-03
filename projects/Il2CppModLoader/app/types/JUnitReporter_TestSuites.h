#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JUnitReporter_TestSuites {
        namespace {
            app::JUnitReporter_TestSuites__Class* type_info_ref = nullptr;
        }
        app::JUnitReporter_TestSuites__Class** type_info = &type_info_ref;
        inline app::JUnitReporter_TestSuites__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_TestSuites__Class>(type_info, "", "JUnitReporter", "TestSuites");
        }
        inline app::JUnitReporter_TestSuites* create() {
            return il2cpp::create_object<app::JUnitReporter_TestSuites>(get_class());
        }
    } // namespace JUnitReporter_TestSuites
} // namespace app::classes::types
