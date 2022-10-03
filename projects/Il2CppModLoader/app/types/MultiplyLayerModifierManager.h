#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerModifierManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MultiplyLayerModifierManager__Class** type_info;
        inline app::MultiplyLayerModifierManager__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerModifierManager__Class>(type_info, "", "MultiplyLayerModifierManager");
        }
        inline app::MultiplyLayerModifierManager* create() {
            return il2cpp::create_object<app::MultiplyLayerModifierManager>(get_class());
        }
    } // namespace MultiplyLayerModifierManager
} // namespace app::classes::types
