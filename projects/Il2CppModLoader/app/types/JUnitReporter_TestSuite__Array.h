#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JUnitReporter_TestSuite__Array {
        namespace {
            app::JUnitReporter_TestSuite__Array__Class* type_info_ref = nullptr;
        }
        app::JUnitReporter_TestSuite__Array__Class** type_info = &type_info_ref;
        inline app::JUnitReporter_TestSuite__Array__Class* get_class() {
            return il2cpp::get_class<app::JUnitReporter_TestSuite__Array__Class>(type_info, "", "JUnitReporter+TestSuite[]");
        }
        inline app::JUnitReporter_TestSuite__Array* create() {
            return il2cpp::create_object<app::JUnitReporter_TestSuite__Array>(get_class());
        }
    } // namespace JUnitReporter_TestSuite__Array
} // namespace app::classes::types
