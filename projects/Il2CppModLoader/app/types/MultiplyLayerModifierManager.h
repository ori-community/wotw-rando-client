#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplyLayerModifierManager {
        inline app::MultiplyLayerModifierManager__Class** type_info = (app::MultiplyLayerModifierManager__Class**)(modloader::win::memory::resolve_rva(0x04765E28));
        inline app::MultiplyLayerModifierManager__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerModifierManager__Class>(type_info, "", "MultiplyLayerModifierManager");
        }
        inline app::MultiplyLayerModifierManager* create() {
            return il2cpp::create_object<app::MultiplyLayerModifierManager>(get_class());
        }
    } // namespace MultiplyLayerModifierManager
} // namespace app::classes::types
