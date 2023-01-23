#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JUnitReporter_TestSuites_c__Class.h>
#include <Modloader/app/structs/JUnitReporter_TestSuites_c.h>

namespace app::classes::types {
    namespace JUnitReporter_TestSuites_c {
        inline app::JUnitReporter_TestSuites_c__Class** type_info = (app::JUnitReporter_TestSuites_c__Class**)(modloader::win::memory::resolve_rva(0x0470D0D8));
        inline app::JUnitReporter_TestSuites_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_TestSuites_c__Class>(type_info, "", "JUnitReporter+TestSuites", "<>c");
        }
        inline app::JUnitReporter_TestSuites_c* create() {
            return il2cpp::create_object<app::JUnitReporter_TestSuites_c>(get_class());
        }
    } // namespace JUnitReporter_TestSuites_c
} // namespace app::classes::types
