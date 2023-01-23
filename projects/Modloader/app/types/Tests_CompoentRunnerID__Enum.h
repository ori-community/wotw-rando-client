#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Tests_CompoentRunnerID__Enum__Class.h>
#include <Modloader/app/structs/Tests_CompoentRunnerID__Enum.h>

namespace app::classes::types {
    namespace Tests_CompoentRunnerID__Enum {
        inline app::Tests_CompoentRunnerID__Enum__Class** type_info = (app::Tests_CompoentRunnerID__Enum__Class**)(modloader::win::memory::resolve_rva(0x04715158));
        inline app::Tests_CompoentRunnerID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_CompoentRunnerID__Enum__Class>(type_info, "HierarchyPerfTest", "Tests", "CompoentRunnerID");
        }
        inline app::Tests_CompoentRunnerID__Enum* create() {
            return il2cpp::create_object<app::Tests_CompoentRunnerID__Enum>(get_class());
        }
    } // namespace Tests_CompoentRunnerID__Enum
} // namespace app::classes::types
