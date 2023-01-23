#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SliceExecutionStats__Class.h>
#include <Modloader/app/structs/SliceExecutionStats.h>
#include <Modloader/app/structs/SliceExecutionStats__Boxed.h>

namespace app::classes::types {
    namespace SliceExecutionStats {
        inline app::SliceExecutionStats__Class** type_info = (app::SliceExecutionStats__Class**)(modloader::win::memory::resolve_rva(0x047286C8));
        inline app::SliceExecutionStats__Class* get_class() {
            return il2cpp::get_class<app::SliceExecutionStats__Class>(type_info, "Moon.TimeSlicer", "SliceExecutionStats");
        }
        inline app::SliceExecutionStats* create() {
            return il2cpp::create_object<app::SliceExecutionStats>(get_class());
        }
        inline app::SliceExecutionStats__Boxed* box(app::SliceExecutionStats value) {
            return il2cpp::box_value<app::SliceExecutionStats__Boxed>(get_class(), value);
        }
    } // namespace SliceExecutionStats
} // namespace app::classes::types
