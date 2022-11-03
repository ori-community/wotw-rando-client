#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Recorder_RecorderState__Enum {
        inline app::Recorder_RecorderState__Enum__Class** type_info = (app::Recorder_RecorderState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473F038));
        inline app::Recorder_RecorderState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Recorder_RecorderState__Enum__Class>(type_info, "", "Recorder", "RecorderState");
        }
        inline app::Recorder_RecorderState__Enum* create() {
            return il2cpp::create_object<app::Recorder_RecorderState__Enum>(get_class());
        }
    } // namespace Recorder_RecorderState__Enum
} // namespace app::classes::types
