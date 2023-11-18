#pragma once
#include <Modloader/app/structs/ArtOptimizerDataContainer_c.h>
#include <Modloader/app/structs/ArtOptimizerDataContainer_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizerDataContainer_c {
        inline app::ArtOptimizerDataContainer_c__Class** type_info() {
            static app::ArtOptimizerDataContainer_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArtOptimizerDataContainer_c__Class**)(modloader::win::memory::resolve_rva(0x04741298));
            }
            return cache;
        }
        inline app::ArtOptimizerDataContainer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtOptimizerDataContainer_c__Class>(type_info(), "Moon.ArtOptimization", "ArtOptimizerDataContainer", "<>c");
        }
        inline app::ArtOptimizerDataContainer_c* create() {
            return il2cpp::create_object<app::ArtOptimizerDataContainer_c>(get_class());
        }
    } // namespace ArtOptimizerDataContainer_c
} // namespace app::classes::types
