#pragma once
#include <Modloader/app/structs/ArtOptimizerHeuristics.h>
#include <Modloader/app/structs/ArtOptimizerHeuristics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizerHeuristics {
        inline app::ArtOptimizerHeuristics__Class** type_info() {
            static app::ArtOptimizerHeuristics__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArtOptimizerHeuristics__Class**)(modloader::win::memory::resolve_rva(0x04741620));
            }
            return cache;
        }
        inline app::ArtOptimizerHeuristics__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizerHeuristics__Class>(type_info(), "Moon.ArtOptimization", "ArtOptimizerHeuristics");
        }
        inline app::ArtOptimizerHeuristics* create() {
            return il2cpp::create_object<app::ArtOptimizerHeuristics>(get_class());
        }
    } // namespace ArtOptimizerHeuristics
} // namespace app::classes::types
