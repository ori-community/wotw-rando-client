#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundLog {
        inline app::SoundLog__Class** type_info = (app::SoundLog__Class**)(modloader::win::memory::resolve_rva(0x0474F658));
        inline app::SoundLog__Class* get_class() {
            return il2cpp::get_class<app::SoundLog__Class>(type_info, "", "SoundLog");
        }
        inline app::SoundLog* create() {
            return il2cpp::create_object<app::SoundLog>(get_class());
        }
    } // namespace SoundLog
} // namespace app::classes::types
