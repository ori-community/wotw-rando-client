#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpeechError__Enum__Class.h>
#include <Modloader/app/structs/SpeechError__Enum.h>

namespace app::classes::types {
    namespace SpeechError__Enum {
        inline app::SpeechError__Enum__Class** type_info = (app::SpeechError__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470C320));
        inline app::SpeechError__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpeechError__Enum__Class>(type_info, "UnityEngine.Windows.Speech", "SpeechError");
        }
        inline app::SpeechError__Enum* create() {
            return il2cpp::create_object<app::SpeechError__Enum>(get_class());
        }
    } // namespace SpeechError__Enum
} // namespace app::classes::types
