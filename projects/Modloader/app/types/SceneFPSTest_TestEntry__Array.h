#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Array__Class.h>
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Array.h>

namespace app::classes::types {
    namespace SceneFPSTest_TestEntry__Array {
        inline app::SceneFPSTest_TestEntry__Array__Class** type_info = (app::SceneFPSTest_TestEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x0470BB00));
        inline app::SceneFPSTest_TestEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneFPSTest_TestEntry__Array__Class>(type_info, "", "SceneFPSTest+TestEntry[]");
        }
        inline app::SceneFPSTest_TestEntry__Array* create() {
            return il2cpp::create_object<app::SceneFPSTest_TestEntry__Array>(get_class());
        }
    } // namespace SceneFPSTest_TestEntry__Array
} // namespace app::classes::types
