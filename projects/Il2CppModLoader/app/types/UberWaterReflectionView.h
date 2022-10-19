#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterReflectionView {
        inline app::UberWaterReflectionView__Class** type_info = (app::UberWaterReflectionView__Class**)(modloader::win::memory::resolve_rva(0x04776CC0));
        inline app::UberWaterReflectionView__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionView__Class>(type_info, "", "UberWaterReflectionView");
        }
        inline app::UberWaterReflectionView* create() {
            return il2cpp::create_object<app::UberWaterReflectionView>(get_class());
        }
    } // namespace UberWaterReflectionView
} // namespace app::classes::types
