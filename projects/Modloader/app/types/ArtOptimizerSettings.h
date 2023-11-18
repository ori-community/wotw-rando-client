#pragma once
#include <Modloader/app/structs/ArtOptimizerSettings.h>
#include <Modloader/app/structs/ArtOptimizerSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizerSettings {
        inline app::ArtOptimizerSettings__Class** type_info() {
            static app::ArtOptimizerSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArtOptimizerSettings__Class**)(modloader::win::memory::resolve_rva(0x0473EFD8));
            }
            return cache;
        }
        inline app::ArtOptimizerSettings__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizerSettings__Class>(type_info(), "Moon.ArtOptimization", "ArtOptimizerSettings");
        }
        inline app::ArtOptimizerSettings* create() {
            return il2cpp::create_object<app::ArtOptimizerSettings>(get_class());
        }
    } // namespace ArtOptimizerSettings
} // namespace app::classes::types
