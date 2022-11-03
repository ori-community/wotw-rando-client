#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Sound {
        inline app::Sound__Class** type_info = (app::Sound__Class**)(modloader::win::memory::resolve_rva(0x04769F88));
        inline app::Sound__Class* get_class() {
            return il2cpp::get_class<app::Sound__Class>(type_info, "Core", "Sound");
        }
        inline app::Sound* create() {
            return il2cpp::create_object<app::Sound>(get_class());
        }
    } // namespace Sound
} // namespace app::classes::types
