#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArtOptimizer_c {
        inline app::ArtOptimizer_c__Class** type_info = (app::ArtOptimizer_c__Class**)(modloader::win::memory::resolve_rva(0x047499F8));
        inline app::ArtOptimizer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtOptimizer_c__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizer", "<>c");
        }
        inline app::ArtOptimizer_c* create() {
            return il2cpp::create_object<app::ArtOptimizer_c>(get_class());
        }
    } // namespace ArtOptimizer_c
} // namespace app::classes::types
