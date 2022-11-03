#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineParentOwnerUtils_c {
        inline app::TimelineParentOwnerUtils_c__Class** type_info = (app::TimelineParentOwnerUtils_c__Class**)(modloader::win::memory::resolve_rva(0x04703958));
        inline app::TimelineParentOwnerUtils_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineParentOwnerUtils_c__Class>(type_info, "", "TimelineParentOwnerUtils", "<>c");
        }
        inline app::TimelineParentOwnerUtils_c* create() {
            return il2cpp::create_object<app::TimelineParentOwnerUtils_c>(get_class());
        }
    } // namespace TimelineParentOwnerUtils_c
} // namespace app::classes::types
