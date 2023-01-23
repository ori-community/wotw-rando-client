#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArtOptimizerSettings__Class.h>
#include <Modloader/app/structs/ArtOptimizerSettings.h>

namespace app::classes::types {
    namespace ArtOptimizerSettings {
        inline app::ArtOptimizerSettings__Class** type_info = (app::ArtOptimizerSettings__Class**)(modloader::win::memory::resolve_rva(0x0473EFD8));
        inline app::ArtOptimizerSettings__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizerSettings__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizerSettings");
        }
        inline app::ArtOptimizerSettings* create() {
            return il2cpp::create_object<app::ArtOptimizerSettings>(get_class());
        }
    } // namespace ArtOptimizerSettings
} // namespace app::classes::types
