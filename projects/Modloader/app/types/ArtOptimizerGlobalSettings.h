#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArtOptimizerGlobalSettings {
        inline app::ArtOptimizerGlobalSettings__Class** type_info = (app::ArtOptimizerGlobalSettings__Class**)(modloader::win::memory::resolve_rva(0x047813C8));
        inline app::ArtOptimizerGlobalSettings__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizerGlobalSettings__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizerGlobalSettings");
        }
        inline app::ArtOptimizerGlobalSettings* create() {
            return il2cpp::create_object<app::ArtOptimizerGlobalSettings>(get_class());
        }
    } // namespace ArtOptimizerGlobalSettings
} // namespace app::classes::types
