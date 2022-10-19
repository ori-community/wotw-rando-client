#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorVariationManager {
        inline app::ColorVariationManager__Class** type_info = (app::ColorVariationManager__Class**)(modloader::win::memory::resolve_rva(0x04778C40));
        inline app::ColorVariationManager__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationManager__Class>(type_info, "", "ColorVariationManager");
        }
        inline app::ColorVariationManager* create() {
            return il2cpp::create_object<app::ColorVariationManager>(get_class());
        }
    } // namespace ColorVariationManager
} // namespace app::classes::types
