#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VirtualMoonTimelineCustomGroup {
        inline app::VirtualMoonTimelineCustomGroup__Class** type_info = (app::VirtualMoonTimelineCustomGroup__Class**)(modloader::win::memory::resolve_rva(0x0473A908));
        inline app::VirtualMoonTimelineCustomGroup__Class* get_class() {
            return il2cpp::get_class<app::VirtualMoonTimelineCustomGroup__Class>(type_info, "Moon.Timeline", "VirtualMoonTimelineCustomGroup");
        }
        inline app::VirtualMoonTimelineCustomGroup* create() {
            return il2cpp::create_object<app::VirtualMoonTimelineCustomGroup>(get_class());
        }
    } // namespace VirtualMoonTimelineCustomGroup
} // namespace app::classes::types
