#pragma once
#include <Modloader/app/structs/FontData.h>
#include <Modloader/app/structs/FontData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FontData {
        inline app::FontData__Class** type_info() {
            static app::FontData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FontData__Class**)(modloader::win::memory::resolve_rva(0x04799650));
            }
            return cache;
        }
        inline app::FontData__Class* get_class() {
            return il2cpp::get_class<app::FontData__Class>(type_info(), "UnityEngine.UI", "FontData");
        }
        inline app::FontData* create() {
            return il2cpp::create_object<app::FontData>(get_class());
        }
    } // namespace FontData
} // namespace app::classes::types
