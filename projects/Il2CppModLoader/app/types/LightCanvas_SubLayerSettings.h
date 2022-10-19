#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCanvas_SubLayerSettings {
        inline app::LightCanvas_SubLayerSettings__Class** type_info = (app::LightCanvas_SubLayerSettings__Class**)(modloader::win::memory::resolve_rva(0x04757F58));
        inline app::LightCanvas_SubLayerSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_SubLayerSettings__Class>(type_info, "", "LightCanvas", "SubLayerSettings");
        }
        inline app::LightCanvas_SubLayerSettings* create() {
            return il2cpp::create_object<app::LightCanvas_SubLayerSettings>(get_class());
        }
    } // namespace LightCanvas_SubLayerSettings
} // namespace app::classes::types
