#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArtOptimizer {
        inline app::ArtOptimizer__Class** type_info = (app::ArtOptimizer__Class**)(modloader::win::memory::resolve_rva(0x0470D400));
        inline app::ArtOptimizer__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizer__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizer");
        }
        inline app::ArtOptimizer* create() {
            return il2cpp::create_object<app::ArtOptimizer>(get_class());
        }
    } // namespace ArtOptimizer
} // namespace app::classes::types
