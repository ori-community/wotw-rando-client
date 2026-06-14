#pragma once
#include <Modloader/app/structs/ColorVariationManager.h>
#include <Modloader/app/structs/ColorVariationManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorVariationManager {
        inline app::ColorVariationManager__Class** type_info() {
            static app::ColorVariationManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColorVariationManager__Class**)(modloader::win::memory::resolve_rva(0x04778C40));
            }
            return cache;
        }
        inline app::ColorVariationManager__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationManager__Class>(type_info(), "", "ColorVariationManager");
        }
        inline app::ColorVariationManager* create() {
            return il2cpp::create_object<app::ColorVariationManager>(get_class());
        }
    } // namespace ColorVariationManager
} // namespace app::classes::types
