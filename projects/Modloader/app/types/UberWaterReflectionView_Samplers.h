#pragma once
#include <Modloader/app/structs/UberWaterReflectionView_Samplers.h>
#include <Modloader/app/structs/UberWaterReflectionView_Samplers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_Samplers {
        inline app::UberWaterReflectionView_Samplers__Class** type_info() {
            static app::UberWaterReflectionView_Samplers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterReflectionView_Samplers__Class**)(modloader::win::memory::resolve_rva(0x0475EF50));
            }
            return cache;
        }
        inline app::UberWaterReflectionView_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_Samplers__Class>(type_info(), "", "UberWaterReflectionView", "Samplers");
        }
        inline app::UberWaterReflectionView_Samplers* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_Samplers>(get_class());
        }
    } // namespace UberWaterReflectionView_Samplers
} // namespace app::classes::types
