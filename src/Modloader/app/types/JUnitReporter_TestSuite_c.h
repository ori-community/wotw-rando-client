#pragma once
#include <Modloader/app/structs/JUnitReporter_TestSuite_c.h>
#include <Modloader/app/structs/JUnitReporter_TestSuite_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JUnitReporter_TestSuite_c {
        inline app::JUnitReporter_TestSuite_c__Class** type_info() {
            static app::JUnitReporter_TestSuite_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JUnitReporter_TestSuite_c__Class**)(modloader::win::memory::resolve_rva(0x04732260));
            }
            return cache;
        }
        inline app::JUnitReporter_TestSuite_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_TestSuite_c__Class>(type_info(), "", "JUnitReporter+TestSuite", "<>c");
        }
        inline app::JUnitReporter_TestSuite_c* create() {
            return il2cpp::create_object<app::JUnitReporter_TestSuite_c>(get_class());
        }
    } // namespace JUnitReporter_TestSuite_c
} // namespace app::classes::types
