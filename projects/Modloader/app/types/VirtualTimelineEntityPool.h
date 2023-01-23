#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VirtualTimelineEntityPool__Class.h>
#include <Modloader/app/structs/VirtualTimelineEntityPool.h>

namespace app::classes::types {
    namespace VirtualTimelineEntityPool {
        inline app::VirtualTimelineEntityPool__Class** type_info = (app::VirtualTimelineEntityPool__Class**)(modloader::win::memory::resolve_rva(0x0470CD68));
        inline app::VirtualTimelineEntityPool__Class* get_class() {
            return il2cpp::get_class<app::VirtualTimelineEntityPool__Class>(type_info, "Moon.Timeline", "VirtualTimelineEntityPool");
        }
        inline app::VirtualTimelineEntityPool* create() {
            return il2cpp::create_object<app::VirtualTimelineEntityPool>(get_class());
        }
    } // namespace VirtualTimelineEntityPool
} // namespace app::classes::types
