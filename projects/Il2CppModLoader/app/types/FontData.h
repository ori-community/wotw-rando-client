#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FontData {
        inline app::FontData__Class** type_info = (app::FontData__Class**)(modloader::win::memory::resolve_rva(0x04799650));
        inline app::FontData__Class* get_class() {
            return il2cpp::get_class<app::FontData__Class>(type_info, "UnityEngine.UI", "FontData");
        }
        inline app::FontData* create() {
            return il2cpp::create_object<app::FontData>(get_class());
        }
    } // namespace FontData
} // namespace app::classes::types
