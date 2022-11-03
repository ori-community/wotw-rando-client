#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneFPSTest_c {
        inline app::SceneFPSTest_c__Class** type_info = (app::SceneFPSTest_c__Class**)(modloader::win::memory::resolve_rva(0x04722090));
        inline app::SceneFPSTest_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneFPSTest_c__Class>(type_info, "", "SceneFPSTest", "<>c");
        }
        inline app::SceneFPSTest_c* create() {
            return il2cpp::create_object<app::SceneFPSTest_c>(get_class());
        }
    } // namespace SceneFPSTest_c
} // namespace app::classes::types
