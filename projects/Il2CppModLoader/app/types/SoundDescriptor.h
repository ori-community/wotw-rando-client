#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundDescriptor {
        inline app::SoundDescriptor__Class** type_info = (app::SoundDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0477A0A8));
        inline app::SoundDescriptor__Class* get_class() {
            return il2cpp::get_class<app::SoundDescriptor__Class>(type_info, "", "SoundDescriptor");
        }
        inline app::SoundDescriptor* create() {
            return il2cpp::create_object<app::SoundDescriptor>(get_class());
        }
    } // namespace SoundDescriptor
} // namespace app::classes::types
