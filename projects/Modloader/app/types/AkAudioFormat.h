#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkAudioFormat {
        inline app::AkAudioFormat__Class** type_info = (app::AkAudioFormat__Class**)(modloader::win::memory::resolve_rva(0x04768700));
        inline app::AkAudioFormat__Class* get_class() {
            return il2cpp::get_class<app::AkAudioFormat__Class>(type_info, "", "AkAudioFormat");
        }
        inline app::AkAudioFormat* create() {
            return il2cpp::create_object<app::AkAudioFormat>(get_class());
        }
    } // namespace AkAudioFormat
} // namespace app::classes::types
