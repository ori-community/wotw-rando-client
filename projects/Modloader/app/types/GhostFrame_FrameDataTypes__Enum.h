#pragma once
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostFrame_FrameDataTypes__Enum {
        inline app::GhostFrame_FrameDataTypes__Enum__Class** type_info() {
            static app::GhostFrame_FrameDataTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostFrame_FrameDataTypes__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477FC88));
            }
            return cache;
        }
        inline app::GhostFrame_FrameDataTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostFrame_FrameDataTypes__Enum__Class>(type_info(), "", "GhostFrame", "FrameDataTypes");
        }
        inline app::GhostFrame_FrameDataTypes__Enum* create() {
            return il2cpp::create_object<app::GhostFrame_FrameDataTypes__Enum>(get_class());
        }
    } // namespace GhostFrame_FrameDataTypes__Enum
} // namespace app::classes::types
