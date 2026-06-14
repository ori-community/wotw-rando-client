#pragma once
#include <Modloader/app/structs/ArtOptimizerGlobalSettings.h>
#include <Modloader/app/structs/ArtOptimizerGlobalSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizerGlobalSettings {
        inline app::ArtOptimizerGlobalSettings__Class** type_info() {
            static app::ArtOptimizerGlobalSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArtOptimizerGlobalSettings__Class**)(modloader::win::memory::resolve_rva(0x047813C8));
            }
            return cache;
        }
        inline app::ArtOptimizerGlobalSettings__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizerGlobalSettings__Class>(type_info(), "Moon.ArtOptimization", "ArtOptimizerGlobalSettings");
        }
        inline app::ArtOptimizerGlobalSettings* create() {
            return il2cpp::create_object<app::ArtOptimizerGlobalSettings>(get_class());
        }
    } // namespace ArtOptimizerGlobalSettings
} // namespace app::classes::types
