#pragma once
#include <Modloader/app/structs/TestRunner_c.h>
#include <Modloader/app/structs/TestRunner_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestRunner_c {
        inline app::TestRunner_c__Class** type_info() {
            static app::TestRunner_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TestRunner_c__Class**)(modloader::win::memory::resolve_rva(0x047536A0));
            }
            return cache;
        }
        inline app::TestRunner_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TestRunner_c__Class>(type_info(), "HierarchyPerfTest", "TestRunner", "<>c");
        }
        inline app::TestRunner_c* create() {
            return il2cpp::create_object<app::TestRunner_c>(get_class());
        }
    } // namespace TestRunner_c
} // namespace app::classes::types
