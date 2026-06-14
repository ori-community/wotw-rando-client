#pragma once
#include <Modloader/app/structs/TestRunner.h>
#include <Modloader/app/structs/TestRunner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestRunner {
        inline app::TestRunner__Class** type_info() {
            static app::TestRunner__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TestRunner__Class**)(modloader::win::memory::resolve_rva(0x0477A378));
            }
            return cache;
        }
        inline app::TestRunner__Class* get_class() {
            return il2cpp::get_class<app::TestRunner__Class>(type_info(), "HierarchyPerfTest", "TestRunner");
        }
        inline app::TestRunner* create() {
            return il2cpp::create_object<app::TestRunner>(get_class());
        }
    } // namespace TestRunner
} // namespace app::classes::types
