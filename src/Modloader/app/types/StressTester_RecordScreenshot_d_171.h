#pragma once
#include <Modloader/app/structs/StressTester_RecordScreenshot_d_171.h>
#include <Modloader/app/structs/StressTester_RecordScreenshot_d_171__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTester_RecordScreenshot_d_171 {
        inline app::StressTester_RecordScreenshot_d_171__Class** type_info() {
            static app::StressTester_RecordScreenshot_d_171__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StressTester_RecordScreenshot_d_171__Class**)(modloader::win::memory::resolve_rva(0x04751520));
            }
            return cache;
        }
        inline app::StressTester_RecordScreenshot_d_171__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_RecordScreenshot_d_171__Class>(type_info(), "", "StressTester", "<RecordScreenshot>d__171");
        }
        inline app::StressTester_RecordScreenshot_d_171* create() {
            return il2cpp::create_object<app::StressTester_RecordScreenshot_d_171>(get_class());
        }
    } // namespace StressTester_RecordScreenshot_d_171
} // namespace app::classes::types
