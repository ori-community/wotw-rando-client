#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Recorder_RecorderState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Recorder_RecorderState__Enum__Class** type_info;
        inline app::Recorder_RecorderState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Recorder_RecorderState__Enum__Class>(type_info, "", "Recorder", "RecorderState");
        }
        inline app::Recorder_RecorderState__Enum* create() {
            return il2cpp::create_object<app::Recorder_RecorderState__Enum>(get_class());
        }
    } // namespace Recorder_RecorderState__Enum
} // namespace app::classes::types
