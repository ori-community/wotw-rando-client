#pragma once
#include <Modloader/app/structs/MultiplyLayerModifierManager.h>
#include <Modloader/app/structs/MultiplyLayerModifierManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerModifierManager {
        inline app::MultiplyLayerModifierManager__Class** type_info() {
            static app::MultiplyLayerModifierManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MultiplyLayerModifierManager__Class**)(modloader::win::memory::resolve_rva(0x04765E28));
            }
            return cache;
        }
        inline app::MultiplyLayerModifierManager__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerModifierManager__Class>(type_info(), "", "MultiplyLayerModifierManager");
        }
        inline app::MultiplyLayerModifierManager* create() {
            return il2cpp::create_object<app::MultiplyLayerModifierManager>(get_class());
        }
    } // namespace MultiplyLayerModifierManager
} // namespace app::classes::types
