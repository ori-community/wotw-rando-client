#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecorderSettings {
        inline app::RecorderSettings__Class** type_info = (app::RecorderSettings__Class**)(modloader::win::memory::resolve_rva(0x0475FDB8));
        inline app::RecorderSettings__Class* get_class() {
            return il2cpp::get_class<app::RecorderSettings__Class>(type_info, "Moon.ContinuousIntegration", "RecorderSettings");
        }
        inline app::RecorderSettings* create() {
            return il2cpp::create_object<app::RecorderSettings>(get_class());
        }
    } // namespace RecorderSettings
} // namespace app::classes::types
