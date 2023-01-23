#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TestReporter__Class.h>
#include <Modloader/app/structs/TestReporter.h>

namespace app::classes::types {
    namespace TestReporter {
        inline app::TestReporter__Class** type_info = (app::TestReporter__Class**)(modloader::win::memory::resolve_rva(0x0472CCF8));
        inline app::TestReporter__Class* get_class() {
            return il2cpp::get_class<app::TestReporter__Class>(type_info, "", "TestReporter");
        }
        inline app::TestReporter* create() {
            return il2cpp::create_object<app::TestReporter>(get_class());
        }
    } // namespace TestReporter
} // namespace app::classes::types
