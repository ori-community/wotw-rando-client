#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeData__Class.h>
#include <Modloader/app/structs/TimeData.h>
#include <Modloader/app/structs/TimeData__Boxed.h>

namespace app::classes::types {
    namespace TimeData {
        inline app::TimeData__Class** type_info = (app::TimeData__Class**)(modloader::win::memory::resolve_rva(0x04709888));
        inline app::TimeData__Class* get_class() {
            return il2cpp::get_class<app::TimeData__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "TimeData");
        }
        inline app::TimeData* create() {
            return il2cpp::create_object<app::TimeData>(get_class());
        }
        inline app::TimeData__Boxed* box(app::TimeData value) {
            return il2cpp::box_value<app::TimeData__Boxed>(get_class(), value);
        }
    } // namespace TimeData
} // namespace app::classes::types
