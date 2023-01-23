#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JobRanges__Class.h>
#include <Modloader/app/structs/JobRanges.h>
#include <Modloader/app/structs/JobRanges__Boxed.h>

namespace app::classes::types {
    namespace JobRanges {
        inline app::JobRanges__Class** type_info = (app::JobRanges__Class**)(modloader::win::memory::resolve_rva(0x04745BA8));
        inline app::JobRanges__Class* get_class() {
            return il2cpp::get_class<app::JobRanges__Class>(type_info, "Unity.Jobs.LowLevel.Unsafe", "JobRanges");
        }
        inline app::JobRanges* create() {
            return il2cpp::create_object<app::JobRanges>(get_class());
        }
        inline app::JobRanges__Boxed* box(app::JobRanges value) {
            return il2cpp::box_value<app::JobRanges__Boxed>(get_class(), value);
        }
    } // namespace JobRanges
} // namespace app::classes::types
