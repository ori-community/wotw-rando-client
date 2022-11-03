#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TestRunner {
        inline app::TestRunner__Class** type_info = (app::TestRunner__Class**)(modloader::win::memory::resolve_rva(0x0477A378));
        inline app::TestRunner__Class* get_class() {
            return il2cpp::get_class<app::TestRunner__Class>(type_info, "HierarchyPerfTest", "TestRunner");
        }
        inline app::TestRunner* create() {
            return il2cpp::create_object<app::TestRunner>(get_class());
        }
    } // namespace TestRunner
} // namespace app::classes::types
