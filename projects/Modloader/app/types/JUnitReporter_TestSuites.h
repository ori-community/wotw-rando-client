#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JUnitReporter_TestSuites {
        namespace {
            inline app::JUnitReporter_TestSuites__Class* type_info_ref = nullptr;
        }
        inline app::JUnitReporter_TestSuites__Class** type_info = &type_info_ref;
        inline app::JUnitReporter_TestSuites__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_TestSuites__Class>(type_info, "", "JUnitReporter", "TestSuites");
        }
        inline app::JUnitReporter_TestSuites* create() {
            return il2cpp::create_object<app::JUnitReporter_TestSuites>(get_class());
        }
    } // namespace JUnitReporter_TestSuites
} // namespace app::classes::types
