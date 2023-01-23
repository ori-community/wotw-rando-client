#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecorderFrame_FrameDataTypes__Enum__Class.h>
#include <Modloader/app/structs/RecorderFrame_FrameDataTypes__Enum.h>

namespace app::classes::types {
    namespace RecorderFrame_FrameDataTypes__Enum {
        namespace {
            inline app::RecorderFrame_FrameDataTypes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RecorderFrame_FrameDataTypes__Enum__Class** type_info = &type_info_ref;
        inline app::RecorderFrame_FrameDataTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RecorderFrame_FrameDataTypes__Enum__Class>(type_info, "", "RecorderFrame", "FrameDataTypes");
        }
        inline app::RecorderFrame_FrameDataTypes__Enum* create() {
            return il2cpp::create_object<app::RecorderFrame_FrameDataTypes__Enum>(get_class());
        }
    } // namespace RecorderFrame_FrameDataTypes__Enum
} // namespace app::classes::types
