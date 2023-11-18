#pragma once
#include <Modloader/app/structs/VirtualTimelineEntityPool.h>
#include <Modloader/app/structs/VirtualTimelineEntityPool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VirtualTimelineEntityPool {
        inline app::VirtualTimelineEntityPool__Class** type_info() {
            static app::VirtualTimelineEntityPool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VirtualTimelineEntityPool__Class**)(modloader::win::memory::resolve_rva(0x0470CD68));
            }
            return cache;
        }
        inline app::VirtualTimelineEntityPool__Class* get_class() {
            return il2cpp::get_class<app::VirtualTimelineEntityPool__Class>(type_info(), "Moon.Timeline", "VirtualTimelineEntityPool");
        }
        inline app::VirtualTimelineEntityPool* create() {
            return il2cpp::create_object<app::VirtualTimelineEntityPool>(get_class());
        }
    } // namespace VirtualTimelineEntityPool
} // namespace app::classes::types
