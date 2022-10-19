#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StressTester_RecordScreenshot_d_171 {
        inline app::StressTester_RecordScreenshot_d_171__Class** type_info = (app::StressTester_RecordScreenshot_d_171__Class**)(modloader::win::memory::resolve_rva(0x04751520));
        inline app::StressTester_RecordScreenshot_d_171__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_RecordScreenshot_d_171__Class>(type_info, "", "StressTester", "<RecordScreenshot>d__171");
        }
        inline app::StressTester_RecordScreenshot_d_171* create() {
            return il2cpp::create_object<app::StressTester_RecordScreenshot_d_171>(get_class());
        }
    } // namespace StressTester_RecordScreenshot_d_171
} // namespace app::classes::types
