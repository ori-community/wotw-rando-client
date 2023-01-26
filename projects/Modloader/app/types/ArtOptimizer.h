#pragma once
#include <Modloader/app/structs/ArtOptimizer.h>
#include <Modloader/app/structs/ArtOptimizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizer {
        inline app::ArtOptimizer__Class** type_info() {
            static app::ArtOptimizer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArtOptimizer__Class**)(modloader::win::memory::resolve_rva(0x0470D400));
            }
            return cache;
        }
        inline app::ArtOptimizer__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizer__Class>(type_info(), "Moon.ArtOptimization", "ArtOptimizer");
        }
        inline app::ArtOptimizer* create() {
            return il2cpp::create_object<app::ArtOptimizer>(get_class());
        }
    } // namespace ArtOptimizer
} // namespace app::classes::types
