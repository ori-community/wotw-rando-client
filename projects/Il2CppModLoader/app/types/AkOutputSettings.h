#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkOutputSettings {
        inline app::AkOutputSettings__Class** type_info = (app::AkOutputSettings__Class**)(modloader::win::memory::resolve_rva(0x0474C168));
        inline app::AkOutputSettings__Class* get_class() {
            return il2cpp::get_class<app::AkOutputSettings__Class>(type_info, "", "AkOutputSettings");
        }
        inline app::AkOutputSettings* create() {
            return il2cpp::create_object<app::AkOutputSettings>(get_class());
        }
    } // namespace AkOutputSettings
} // namespace app::classes::types
