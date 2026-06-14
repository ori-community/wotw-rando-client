#pragma once
#include <Modloader/app/structs/MaterialVFXManager.h>
#include <Modloader/app/structs/MaterialVFXManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialVFXManager {
        inline app::MaterialVFXManager__Class** type_info() {
            static app::MaterialVFXManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaterialVFXManager__Class**)(modloader::win::memory::resolve_rva(0x0471B120));
            }
            return cache;
        }
        inline app::MaterialVFXManager__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXManager__Class>(type_info(), "", "MaterialVFXManager");
        }
        inline app::MaterialVFXManager* create() {
            return il2cpp::create_object<app::MaterialVFXManager>(get_class());
        }
    } // namespace MaterialVFXManager
} // namespace app::classes::types
