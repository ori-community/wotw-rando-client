#pragma once
#include <Modloader/app/structs/Recorder_RecorderState__Enum.h>
#include <Modloader/app/structs/Recorder_RecorderState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Recorder_RecorderState__Enum {
        inline app::Recorder_RecorderState__Enum__Class** type_info() {
            static app::Recorder_RecorderState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Recorder_RecorderState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473F038));
            }
            return cache;
        }
        inline app::Recorder_RecorderState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Recorder_RecorderState__Enum__Class>(type_info(), "", "Recorder", "RecorderState");
        }
        inline app::Recorder_RecorderState__Enum* create() {
            return il2cpp::create_object<app::Recorder_RecorderState__Enum>(get_class());
        }
    } // namespace Recorder_RecorderState__Enum
} // namespace app::classes::types
