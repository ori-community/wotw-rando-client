#pragma once
#include <Modloader/app/structs/LoFiPalette_Preset__Enum.h>
#include <Modloader/app/structs/LoFiPalette_Preset__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoFiPalette_Preset__Enum {
        inline app::LoFiPalette_Preset__Enum__Class** type_info() {
            static app::LoFiPalette_Preset__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoFiPalette_Preset__Enum__Class**)(modloader::win::memory::resolve_rva(0x047858D8));
            }
            return cache;
        }
        inline app::LoFiPalette_Preset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LoFiPalette_Preset__Enum__Class>(type_info(), "Colorful", "LoFiPalette", "Preset");
        }
        inline app::LoFiPalette_Preset__Enum* create() {
            return il2cpp::create_object<app::LoFiPalette_Preset__Enum>(get_class());
        }
    } // namespace LoFiPalette_Preset__Enum
} // namespace app::classes::types
