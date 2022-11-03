#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JUnitReporter_TestSuite {
        inline app::JUnitReporter_TestSuite__Class** type_info = (app::JUnitReporter_TestSuite__Class**)(modloader::win::memory::resolve_rva(0x0475E0C0));
        inline app::JUnitReporter_TestSuite__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_TestSuite__Class>(type_info, "", "JUnitReporter", "TestSuite");
        }
        inline app::JUnitReporter_TestSuite* create() {
            return il2cpp::create_object<app::JUnitReporter_TestSuite>(get_class());
        }
        inline app::JUnitReporter_TestSuite__Array* create_array(int size) {
            return il2cpp::array_new<app::JUnitReporter_TestSuite__Array>(get_class(), size);
        }
        inline app::JUnitReporter_TestSuite__Array* create_array(const std::vector<app::JUnitReporter_TestSuite*>& items) {
            return il2cpp::array_new<app::JUnitReporter_TestSuite__Array>(get_class(), items);
        }
    } // namespace JUnitReporter_TestSuite
} // namespace app::classes::types
