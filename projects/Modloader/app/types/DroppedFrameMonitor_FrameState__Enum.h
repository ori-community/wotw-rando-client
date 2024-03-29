#pragma once
#include <Modloader/app/structs/DroppedFrameMonitor_FrameState__Enum.h>
#include <Modloader/app/structs/DroppedFrameMonitor_FrameState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitor_FrameState__Enum {
        inline app::DroppedFrameMonitor_FrameState__Enum__Class** type_info() {
            static app::DroppedFrameMonitor_FrameState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DroppedFrameMonitor_FrameState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04796978));
            }
            return cache;
        }
        inline app::DroppedFrameMonitor_FrameState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DroppedFrameMonitor_FrameState__Enum__Class>(type_info(), "", "DroppedFrameMonitor", "FrameState");
        }
        inline app::DroppedFrameMonitor_FrameState__Enum* create() {
            return il2cpp::create_object<app::DroppedFrameMonitor_FrameState__Enum>(get_class());
        }
    } // namespace DroppedFrameMonitor_FrameState__Enum
} // namespace app::classes::types
