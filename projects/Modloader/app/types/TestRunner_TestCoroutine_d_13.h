#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TestRunner_TestCoroutine_d_13__Class.h>
#include <Modloader/app/structs/TestRunner_TestCoroutine_d_13.h>

namespace app::classes::types {
    namespace TestRunner_TestCoroutine_d_13 {
        inline app::TestRunner_TestCoroutine_d_13__Class** type_info = (app::TestRunner_TestCoroutine_d_13__Class**)(modloader::win::memory::resolve_rva(0x047603E0));
        inline app::TestRunner_TestCoroutine_d_13__Class* get_class() {
            return il2cpp::get_nested_class<app::TestRunner_TestCoroutine_d_13__Class>(type_info, "HierarchyPerfTest", "TestRunner", "<TestCoroutine>d__13");
        }
        inline app::TestRunner_TestCoroutine_d_13* create() {
            return il2cpp::create_object<app::TestRunner_TestCoroutine_d_13>(get_class());
        }
    } // namespace TestRunner_TestCoroutine_d_13
} // namespace app::classes::types
