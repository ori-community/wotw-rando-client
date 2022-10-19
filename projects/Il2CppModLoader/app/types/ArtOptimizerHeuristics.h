#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArtOptimizerHeuristics {
        inline app::ArtOptimizerHeuristics__Class** type_info = (app::ArtOptimizerHeuristics__Class**)(modloader::win::memory::resolve_rva(0x04741620));
        inline app::ArtOptimizerHeuristics__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizerHeuristics__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizerHeuristics");
        }
        inline app::ArtOptimizerHeuristics* create() {
            return il2cpp::create_object<app::ArtOptimizerHeuristics>(get_class());
        }
    } // namespace ArtOptimizerHeuristics
} // namespace app::classes::types
