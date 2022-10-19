#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TwirlSettings {
        inline app::TwirlSettings__Class** type_info = (app::TwirlSettings__Class**)(modloader::win::memory::resolve_rva(0x0470D478));
        inline app::TwirlSettings__Class* get_class() {
            return il2cpp::get_class<app::TwirlSettings__Class>(type_info, "", "TwirlSettings");
        }
        inline app::TwirlSettings* create() {
            return il2cpp::create_object<app::TwirlSettings>(get_class());
        }
    } // namespace TwirlSettings
} // namespace app::classes::types
