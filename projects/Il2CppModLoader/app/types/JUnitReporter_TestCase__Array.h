#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JUnitReporter_TestCase__Array {
        namespace {
            inline app::JUnitReporter_TestCase__Array__Class* type_info_ref = nullptr;
        }
        inline app::JUnitReporter_TestCase__Array__Class** type_info = &type_info_ref;
        inline app::JUnitReporter_TestCase__Array__Class* get_class() {
            return il2cpp::get_class<app::JUnitReporter_TestCase__Array__Class>(type_info, "", "JUnitReporter+TestCase[]");
        }
        inline app::JUnitReporter_TestCase__Array* create() {
            return il2cpp::create_object<app::JUnitReporter_TestCase__Array>(get_class());
        }
    } // namespace JUnitReporter_TestCase__Array
} // namespace app::classes::types
