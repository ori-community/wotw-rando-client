#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArtOptimizerDataContainer_c_DisplayClass18_1__Class.h>
#include <Modloader/app/structs/ArtOptimizerDataContainer_c_DisplayClass18_1.h>

namespace app::classes::types {
    namespace ArtOptimizerDataContainer_c_DisplayClass18_1 {
        inline app::ArtOptimizerDataContainer_c_DisplayClass18_1__Class** type_info = (app::ArtOptimizerDataContainer_c_DisplayClass18_1__Class**)(modloader::win::memory::resolve_rva(0x04715C10));
        inline app::ArtOptimizerDataContainer_c_DisplayClass18_1__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtOptimizerDataContainer_c_DisplayClass18_1__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizerDataContainer", "<>c__DisplayClass18_1");
        }
        inline app::ArtOptimizerDataContainer_c_DisplayClass18_1* create() {
            return il2cpp::create_object<app::ArtOptimizerDataContainer_c_DisplayClass18_1>(get_class());
        }
    } // namespace ArtOptimizerDataContainer_c_DisplayClass18_1
} // namespace app::classes::types
