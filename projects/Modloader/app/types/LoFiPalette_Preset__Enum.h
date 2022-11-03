#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoFiPalette_Preset__Enum {
        inline app::LoFiPalette_Preset__Enum__Class** type_info = (app::LoFiPalette_Preset__Enum__Class**)(modloader::win::memory::resolve_rva(0x047858D8));
        inline app::LoFiPalette_Preset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LoFiPalette_Preset__Enum__Class>(type_info, "Colorful", "LoFiPalette", "Preset");
        }
        inline app::LoFiPalette_Preset__Enum* create() {
            return il2cpp::create_object<app::LoFiPalette_Preset__Enum>(get_class());
        }
    } // namespace LoFiPalette_Preset__Enum
} // namespace app::classes::types
