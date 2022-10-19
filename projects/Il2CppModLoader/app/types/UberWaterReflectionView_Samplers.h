#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_Samplers {
        inline app::UberWaterReflectionView_Samplers__Class** type_info = (app::UberWaterReflectionView_Samplers__Class**)(modloader::win::memory::resolve_rva(0x0475EF50));
        inline app::UberWaterReflectionView_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_Samplers__Class>(type_info, "", "UberWaterReflectionView", "Samplers");
        }
        inline app::UberWaterReflectionView_Samplers* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_Samplers>(get_class());
        }
    } // namespace UberWaterReflectionView_Samplers
} // namespace app::classes::types
